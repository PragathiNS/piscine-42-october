/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:23:09 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:38:34 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while ((*d++ = *s++) != '\0')
		;
	return (dst);
}
