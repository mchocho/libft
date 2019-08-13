/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stristrfromindex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:28:45 by mchocho           #+#    #+#             */
/*   Updated: 2019/08/13 15:09:46 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stristrfromindex(const char *s1, const char *s2, int i)
{
	int j;
	int k;

	j = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			k = i;
			while (s1[k] == s2[j])
			{
				if (s2[(j + 1)] == '\0')
					return (i);
				j++;
				k++;
			}
		}
		i++;
	}
	return (-1);
}
