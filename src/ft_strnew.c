/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:13:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/03 18:37:28 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *str = (char *)malloc(size);
	if (!str)
		return (NULL);
	else {
		str[size] = '\0';
		return (str);
	}
}

#include <stdio.h>

int main() {

	printf(" Testing ft_strnew.c\n-------------------------------\n");

	char *foo = "Hey girl! How u doin?";

	foo = ft_strnew(2);

	printf("Result returned: %s\n", foo);

	return 0;
}
