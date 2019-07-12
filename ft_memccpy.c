/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:41:28 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 15:22:20 by mchocho          ###   ########.fr       */
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
	unsigned char				*cpy;
	unsigned char				*val;
	size_t						i;

	if (dst == NULL && src == NULL)
		return (NULL);
	cpy = (unsigned char *)dst;
	val = (unsigned char *)src;
	i = 0;
	while (n > 0 && i < n && val[i])
	{
		if ((unsigned char)val[i] == (char)c)
			return (dst + (i + 1));
		cpy[i] = (unsigned char)val[i];
		i++;
	}
	return (NULL);
}
