/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:46:05 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/10 09:50:52 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl(char const *s) {
	char nl = '\n';

	while(*s) {
		write(1, s, 1);
		s++;
	}
	write(1, &nl, 1);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_putendl.c\n------------------------------------\n");

	char *str = "Hello bitch";

	ft_putendl(str);

	return 0;

}