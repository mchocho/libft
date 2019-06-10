/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:53:36 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/10 15:07:39 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char const *s, int fd) {
	if (fd >= 0 && fd <= 2) {
		while(*s) {
			write(fd, s, 1);
			s++;
		}
	}
}

#include <stdio.h>

int main() {
	printf(" Testing ft_putstr_fd.c\n-----------------------------\n");

	char *str = "Hello bitch!";

	ft_putstr_fd(str, 2);

	return 0;

}
