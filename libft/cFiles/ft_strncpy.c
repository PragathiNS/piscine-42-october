/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:28:06 by pnarayan          #+#    #+#             */
/*   Updated: 2018/02/23 00:30:31 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, int slen)
{
	int 	i;

	i = 0;
	// TODO : when the src length is smaller than slen
	while (i < slen && slen <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= slen)
	{
		dst[i] = '\0';
		i++;
	}
	//dst[i] = '\0';
	return (dst);
}
