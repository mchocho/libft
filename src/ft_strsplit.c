/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:02:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/09 17:07:01 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting
** s using the character c as a delimiter. If the allocation fails the
** function returns NULL.
** Example : ft_strsplit("*hello*fellow***students*", ’*’) returns the
** array ["hello", "fellow", "students"].
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!*s || !c)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i] && i < ft_strlen(s) + 1)
			i++;
		if (i > j)
			str[k++] = ft_strsub(s, j, (i - j));
	}
	str[k] = NULL;
	return (str);
}
