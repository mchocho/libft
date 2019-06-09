/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 11:43:30 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/09 11:51:51 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char const *s) {
	while(*s) {
		write(1, s, 1);
		s++;
	}
}

#include <stdio.h>

int main() {
	printf(" Testing ft_putstr.c\n------------------------------\n");

	char *str = "Hello world";

	//printf("Result returned: ");

	ft_putstr(str);

	return 0;
}
