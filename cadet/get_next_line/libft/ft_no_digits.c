/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 23:37:26 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/17 01:13:30 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_no_digits(int n)
{
	size_t	digits;

	digits = 1;
	while (n /= 10)
		digits++;
	return (digits);
}
