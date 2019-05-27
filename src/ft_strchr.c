/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:11:47 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/27 15:32:01 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	while(*s++) {
		if (*s == (char)c) return ((char *)s);
	}

	if ((char)c == '\0') return ((char *)s);

	return (NULL);
}

#include <string.h>
#include <stdio.h>

int main() {
	printf(" Testing ft_strchr\n-------------------------------\n");

	char *foo = "Even when I lie";

	printf("Result should be: %s\n", strchr(foo, 'I'));


	printf("Result should be: %s\n", ft_strchr(foo, 'I'));

	return 0;
}
