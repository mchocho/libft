/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:47:56 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/09 17:00:02 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters
** are searched. Characters that appear after a `\0' character are not searched.
** Since the strnstr() function is a FreeBSD specific API, it should only be
** used when portability is not a concern.
*/

static int	ft_strsearch(const char *str, const char *search, int i, int len)
{
	int j;

	j = 0;
	if (str[i] && str[i] == search[j])
	{
		while (i < len && str[i] == search[j])
		{
			if (search[j + 1] == '\0')
				return (1);
			j++;
			i++;
		}
	}
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (ft_strsearch(haystack, needle, i, len))
			return ((char *)haystack + i);
		i++;
	}
	if (i == 0)
		return ((char *)(haystack + i));
	return (NULL);
}
