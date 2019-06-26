/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:25:36 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:45:07 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The memcpy() function copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined.  Applications in which dst and
 * src might overlap should use memmove(3) instead.
 */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *cpy;
	char *val;
	size_t i;


	cpy = (char *)dst;
	val = (char *)src;
	i = 0;

	while (i < n) {
		cpy[i] = val[i];
		i++;
	}

	cpy[i] = '\0';
	return (dst);
}
