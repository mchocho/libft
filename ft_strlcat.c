/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:30:42 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 15:27:53 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat() appends string src to the end of dst. It will append at
** most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate,
** unless dstsize is 0 or the original dst string was longer than dstsize
** (in practice this should not happen as it means that either dstsize is
** incorrect or that dst is not a proper string).
**
** If the src and dst strings overlap, the behavior is undefined.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	k = i;
	while (j < (dstsize - k - 1) && dstsize > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (j > dstsize)
		dst[i] = '\0';
	return (i);
}
