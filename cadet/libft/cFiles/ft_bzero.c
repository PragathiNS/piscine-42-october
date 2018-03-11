/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:23:12 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 20:22:41 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *x_set;

	x_set = (unsigned char *)s;
	while (*x_set && n > 0)
	{
		*x_set = 0;
		x_set++;
		n--;
	}
}