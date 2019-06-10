/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:13:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/10 15:19:48 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putendl_fd(char const *s, int fd) {
	char nl = '\n';

	if (fd >= 0 && fd <= 2) {
		while(*s) {
			write(fd, s, 1);
			s++;
		}
		write(fd, &nl, 1);
	}
}

#include <stdio.h>

int  main() {
	printf(" Testing ft_putendl_fd.c\n-----------------------------\n");


	char *foo = "Hello bitch!";

	ft_putendl_fd(foo, 2);

	return 0;
}
