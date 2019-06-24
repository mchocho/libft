/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:58:47 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/21 14:17:06 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_bzero(void *s, size_t n) {
	char *str;
	size_t i;

	str = (char *)s;
	i = 0;

	while(i < n) {
		*str = '\0';
		i++;
		str++;
	}
	return;
}

#include <string.h>

int main() {
	printf(" Testing ft_bzero\n--------------------------------\n");

	char foo[50] = "We think code rocks!";

	char fubu[50] = "We think code rocks!";

	bzero(foo + 5 , 6);

	ft_bzero(fubu + 5, 6);

	printf("Result should be: %s \n", foo);

	printf("Test returned: %s \n", fubu);

	return (0);
}

