/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 11:23:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 09:09:37 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  This function finds the last occurence of c
**  (converted to a char) in the string pointed to
**  by string (including the terminating null character).
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int p;

	i = 0;
	p = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	else if (p > -1)
		return ((char *)(s + p));
	return (NULL);
}
