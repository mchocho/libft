/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:23:15 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 13:30:26 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int main() {
	printf(" Testing ft_strlen\n-------------------\n");

	char *foo = "Hello Bitch!";

	int ori_size = strlen(foo);
	int size = ft_strlen(foo);

	printf("Length of string foo is: %d\n", ori_size);

	printf("Test returned length: %d\n", size);

	return 0;
}
