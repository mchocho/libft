/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:34:50 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/30 10:26:34 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*val1;
	char	*val2;
	size_t	i;

	val1 = (char *)s1;
	val2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (val1[i] != val2[i])
			return (((unsigned char)val1[i]) - ((unsigned char)val2[i]));
		i++;
	}
	return (0);
}
