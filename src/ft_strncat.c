/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:55:52 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/28 15:08:10 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;

	while(s1[len] != '\0') len++;

	while(s2[len] != '\0' && i < n)
	{
		s1[len] = s2[i];
		i++;
		len++;
	}

	s1[len] = '\0';

	return (s1);
}

#include <stdio.h>
#include <string.h>

int main() {
	printf(" Testing ft_strncat.c\n------------------------\n");

	char foo[30] = "Hello ";

	char fubu[30] = "bitch!";

	printf("Result should be: %s\n", strncat(foo, fubu, 5));

	printf("Test returned: %s\n", ft_strncat(foo, fubu, 5));

	return (0);
}
