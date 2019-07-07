/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:54:35 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 14:59:06 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*val;
	size_t	i;

	val = (char *)s;
	i = 0;
	while (val[i] && i < n)
	{
		if (val[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
