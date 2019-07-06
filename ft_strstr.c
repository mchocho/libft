/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:30:46 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/06 08:03:49 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/

static int	strsearch(const char *str, const char *search, int i)
{
	int j;

	j = 0;
	if (str[i] && str[i] == search[j])
	{
		while (str[i] == search[j])
		{
			if (search[j + 1] == '\0')
				return (1);
			j++;
			i++;
		}
	}
	return (0);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (strsearch(haystack, needle, i))
			return ((char *)haystack + i);
		i++;
	}
	if (i == 0)
		return ((char *)(haystack + i));
	return (NULL);
}
