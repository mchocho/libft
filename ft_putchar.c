/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:39:14 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/07 10:51:18 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(const char c)
{
	write(1, &c, 1);
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_putchar.c\n--------------------------------\n");

	char *foo = "Hello bitch!";

	while(*foo) {
		ft_putchar(*foo);
		ft_putchar('\n');
		foo++;
	}

	return 0;

}
