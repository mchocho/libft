/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:24:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/22 15:34:21 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

#include <string.h>

int main() {
	printf(" Testing ft_memchr\n ----------------------------\n");

	char *foo = "Hello bitch!";

	//char *bar = "Hello bitch!";

	printf("Result should be: %s\n", memchr(foo, ' ', 15));

	printf("Test returned: %s\n", ft_memchr(foo, ' ', 15));

	return (0);
}
