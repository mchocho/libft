/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:28:22 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 14:25:53 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memccpy() function copies bytes from string src to string dst.  If the
** character c (as converted to an unsigned char) occurs in the string src, the
** copy stops and a pointer to the byte after the copy of c in the string dst
** is returned. Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*cpy;
	char	*val;
	size_t	i;

	cpy = (char *)dst;
	val = (char *)src;
	i = 0;
	while (i < n && val[i])
	{
		cpy[i] = val[i];
		if (val[i] == (unsigned char)c)
			break ;
		i++;
	}
	cpy[i + 1] = '\0';
	return (dst);
}
