/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:30:46 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/20 14:27:53 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = -1;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] == needle[j]) {
				if (needle[j++] == '\0') {
					return ((char *) haystack + i);
				}
				j++;
				k++;
			}
		}
		j = 0;
		k = -1;
		i++;
	}
	if (!*needle) { //needle is empty
		return ((char *)haystack);
	} else if (i == 0) {
		return ((char *)(haystack + i));
	} else {
		return (NULL);
	}
}
