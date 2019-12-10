/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:47:29 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/14 02:36:49 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() and strncmp() functions lexicographically compare the
** null-terminated strings s1 and s2.
*/

#include "../includes/libft.h"

int		ft_strcmpi(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if ((unsigned char)ft_tolower(*s1) != (unsigned char)ft_tolower(*s2))
			return ((int)((unsigned char)*s1) - (int)((unsigned char)*s2));
		s1++;
		s2++;
	}
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((int)((unsigned char)*s1) - (int)((unsigned char)*s2));
	return (0);
}
