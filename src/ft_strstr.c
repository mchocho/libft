/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:08:11 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 08:33:45 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (strsearch(haystack, needle, i))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
