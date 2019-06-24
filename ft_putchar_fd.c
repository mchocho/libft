/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:46:57 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/10 14:51:39 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar_fd(char c, int fd) {
	if (fd >= 0 && fd <= 2) {
		write(fd, &c, 1);
	}
}

#include <stdio.h>

int main() {
	printf(" Testing ft_putchar_fd.c\n-----------------------\n");

	char foo = 'T';

	ft_putchar_fd(foo, 0);

	return (0);
}
