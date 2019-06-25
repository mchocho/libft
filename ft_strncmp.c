/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:30:14 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/27 15:06:09 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t i;

	i = 0;

	while(*s1 && *s2 && i < n) {
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((int)*s1 - (int)*s2);
		s1++;
		s2++;
	}
	return (0);
}