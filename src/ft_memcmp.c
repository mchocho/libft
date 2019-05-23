/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:34:50 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/22 17:44:56 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
	char *val1;
	char *val2;
	size_t i;

	val1 = (char *)s1;
	val2 = (char *)s2;
	i = 0;

	while(i < n) {
		if (val1[i] != val2[i])
			return (((unsigned char)val1[i]) - ((unsigned char)val2[i]));
		i++;
	}
	return (0);
}

#include <string.h>

int main() {
	printf("  Testing ft_memcmp\n ------------------------\n");

	char *foo = "Hello :itch";

	char *bar = "Hello bitch";

	printf("Result should be: %d\n", memcmp((void *)foo, (void *)bar, 15));

	printf("Test returned: %d\n", ft_memcmp((void *)foo, (void *)bar, 15));
}
