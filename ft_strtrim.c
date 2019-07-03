/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:24:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 18:19:46 by mchocho          ###   ########.fr       */
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

static int ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char *ft_strtrim(char const *s)
{
	char *str;
	int fchar;
	int lchar;
	int lspace;
	int i;
	int j;

	fchar = -1;
	lchar = -1;
	lspace = 0;
	i = 0;
	j = 0;

	while(s[i])
	{
		if (!ft_isspace(s[i])) {
			if(fchar == -1)
				fchar = i;
			lchar = i;
			j = lspace + (j + 1);
			lspace = 0;
		} else
			lspace++;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		if (i >= fchar && i <= lchar)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	return (str);
}
