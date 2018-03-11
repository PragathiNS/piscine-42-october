/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 20:20:06 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/08 21:02:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ( s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (j < 1)
		{
			(*f)(s);
			s++;
			j++;
		}
	}
}
