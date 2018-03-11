/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 09:58:41 by pnarayan          #+#    #+#             */
/*   Updated: 2018/03/07 19:37:57 by pnarayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		diff = (*(s1 + i) - *(s2 + i));
		if (diff != 0)
			break ;
		i++;
	}
	return (diff);
}