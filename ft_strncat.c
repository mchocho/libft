/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:40:55 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/11 18:14:36 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1, then add a
** terminating `\0'.  The string s1 must have sufficient space to hold
** the result.
**
** The strncat() function appends not more than n characters from s2,
** and then adds a terminating `\0'.
**
** The source and destination strings should not overlap, as the behavior
** is undefined.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	while (i < n)
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
