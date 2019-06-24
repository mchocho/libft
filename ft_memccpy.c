/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:28:22 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/21 18:51:34 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *cpy;
	char *val;
	size_t i;

	cpy = (char *)dst;
	val = (char *)src;
	i = 0;

	while(i < n) {
		cpy[i] = val[i];
		if (val[i] == (unsigned char) c) break;
		i++;
	}
	cpy[i+1] = '\0';

	return (dst);
}

#include <string.h>

int main() {
	char *foo = "Hello bitch";

	char bar[50] = "";

	char *dog = "Hello bitch";

	char cat[50] = "";

	memccpy(bar, foo, 'm', 15);

	ft_memccpy(cat, dog, 'm', 15);

	printf("  Testing ft_memccpy\n -------------------\n");

	printf("Result should be %s\n", bar);

	printf("Test returned %s\n", cat);

	return 0;
}
