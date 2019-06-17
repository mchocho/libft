/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:30:42 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/03 14:39:11 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while(dst[i] != '\0') i++;

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

	//char foo[50] = "Hello";

	//const char *fubu = " bitch!";

		

	//printf("Result should be: %d\n", (int)strlcat(foo, fubu, 15) );


	char foo2[50] = "Hello ";

	char *fubu2 = "bitch!";

	//ft_strlcat(foo2, fubu2, 15);

	printf("Test returned: %d\n", (int)ft_strlcat(foo2, fubu2, 15)/*foo2*/);

	printf("Final string is: %s\n", foo2);


	return (0);

}
