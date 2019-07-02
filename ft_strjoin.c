/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:50:00 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 17:12:42 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (!(str = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while(k < i) {
		str[k] = s1[k];
		k++;
	}
	i = 0;
	while (i < j) {
		str[k] = s2[i];
		k++;
		i++;
	}
	str[k] = '\0';
	
	return (str);
}
