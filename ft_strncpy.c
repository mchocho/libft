/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 17:14:07 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 17:08:27 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The stpncpy() and strncpy() functions copy at most len characters from
** src into dst. If src is less than len char-acters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior
** is undefined.
*/

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (src[i])
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	if (src[i] == '\0' && dst[i] && i < size)
		dst[i] = '\0';
	return (dst);
}
