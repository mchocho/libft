/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:42:55 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/11 18:08:48 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The stpncpy() and strncpy() functions copy at most len characters from
** src into dst. If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior
** is undefined.
*/

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (src[len])
		len++;
	while (i < size)
	{
		if (i < len)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
