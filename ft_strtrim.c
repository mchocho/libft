/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:12:50 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 16:53:34 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the
** string. Will be considered as whitespaces the following characters ’ ’,
** ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end,
** the function returns a copy of s. If the allocation fails the function
** returns NULL.
*/

static int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static void		ft_trim(char *dst, char *src, int fchar, int lchar)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (i >= fchar && i <= lchar)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		fchar;
	int		lchar;
	int		i;

	fchar = -1;
	i = 0;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
		{
			if (fchar == -1)
				fchar = i;
			lchar = i;
		}
		i++;
	}
	if (fchar == -1)
		return (ft_strdup(""));
	if (!(str = ft_strnew((size_t)(lchar - fchar + 1))))
		return (NULL);
	ft_trim(str, (char *)s, fchar, lchar);
	return (str);
}
