/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:24:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:43:17 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The memchr() function locates the first occurrence of c
 * (converted to an unsigned char) in string s.
 */

void *ft_memchr(const void *s, int c, size_t n) {
	char *val;
	size_t i;

	val = (char *)s;
	i = 0;

	while(val[i] != '\0' && i < n) {
		if (val[i] == (unsigned char) c)
			return ((void *) (s + i));
		i++;
	}

	return (NULL);
}
