/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:30:42 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/23 11:26:16 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize) {
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while(dst[i] != '\0') {
		i++;
	}

	while(src[j] != '\0' && j < dstsize) {
		dst[i] = src[j];
		i++;
		j++;
	}

	dst[i] = '\0';
	return (i);
}

#include <string.h>

int main() {
	printf("  Testing ft_strlcat\n-------------------------\n");

	char foo[50] = "Hello";

	const char *fubu = " bitch!";

	strlcat(foo, fubu, 15);
	

	printf("Result should be: %s\n", foo);


	char foo2[50] = "Hello ";

	char *fubu2 = "bitch!";

	ft_strlcat(foo2, fubu2, 15);

	printf("Test returned: %s\n", foo2);

	return (0);

}