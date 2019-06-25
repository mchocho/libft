/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:24:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/04 14:46:36 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int k;
	int j;

	fchar = -1;
	lchar = -1;
	lspace = 0;
	i = 0;
	k = 0;
	j = 0;

	while(s[i]) {
		if (!ft_isspace(s[i])) {
			if(fchar == -1) fchar = i;
			lchar = i;
			j = lspace + (j + 1);
			lspace = 0;
		} else lspace++;

		i++;
	}

	str = (char *)malloc(sizeof(char)*j);

	if (!str) return (NULL);

	i = 0;
	j = 0;

	while(s[i]) {
		if (i >= fchar && i <= lchar)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}

	return (str);
}