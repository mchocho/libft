/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:30:42 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/14 02:50:41 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat() appends string src to the end of dst. It will append at
** most dstsize - strlen(dst) - 1 characters. It will then NULL terminate,
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
	if (dst == NULL && src == NULL)
		return (0);
	while (dst[i] && i < dstsize)
		i++;
	k = i;
	while (j < (dstsize - k - 1) && dstsize > 0 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize > 0 && k < dstsize)
		dst[i] = '\0';
	return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf(" Testing ft_strlcat.c\n---------------------\n");

	char foo[100] = "It's the rise of the robots! ";

	char fooboo[100] = "It's the rise of the robots! ";
	
	char fubu[100] = "Plug yourself in and go to sleep.";

	printf("Result should return: %zu\n", strlcat(foo, fubu, 10));

	printf("Result 1 string: %s\n", foo);

	printf("Test returned: %zu\n", ft_strlcat(fooboo, fubu, 10));

	printf("Result 2 string: %s\n", fooboo);

	return (0);

}
