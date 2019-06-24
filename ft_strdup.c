/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:46:14 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/22 18:09:27 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *s1) {
	char *val;
	int i;

	val = (char *)malloc(sizeof(*s1));
	i = 0;

	if (s1[i] == '\0') return (NULL);

	while(s1[i] != '\0') {
		val[i] = s1[i];
		i++;
	}
	val[i] = '\0';

	return (val);
}

#include <string.h>
#include <stdio.h>

int main() {
	printf(" Testing ft_strdup.c\n ---------------------\n");

	char *foo = "Goodbye bitch!";

	//char *fubu;
	//char *bar;

	printf("Result should be: %s\n", strdup(foo));

	printf("Test returned: %s\n", ft_strdup(foo));

	return 0;
}
