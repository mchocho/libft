/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:09:08 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/10 17:51:12 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0 && fd <= 2) {
		char *result;
		int temp;
		int base;
		int i;

		temp = n;
		base = 0;
		i = 0;

		//Check max int and min int
		if (n == -2147483648 || n == 2147483647) {
			temp = (n < 0) ? 11 : 10;
			result = (char *)malloc(sizeof(char) * temp);
			result = (n < 0) ? "-2147483648" : "2147483647";
			while(*result) {
				write(fd, result, 1);
				result++;
			}
			return;
		}

		//Check if value is zero
		if (n == 0) {
			if (!(result = (char *)malloc(sizeof(char) * 2))) return;
			//if (!str) return;
			result[0] = '0';
			result[1] = '\0';
			while(*result) {
				write(fd, result, 1);
				result++;
			}
			return;
		}

		//Detect base
		while(temp) {
			base++;
			temp = temp / 10;
		}

		temp = n;

		//Check for sign
		if (n < 0) {
			temp = temp * -1;
			base++;
		}

		//Create string buffer
		if (!(result = (char *)malloc(sizeof(char) * (base + 1)))) return;

		result[base] = '\0';
			
		while(base--) {
			result[base] = (temp % 10) + '0';
			temp = temp / 10;
			if (n < 0 && base == 1) {
				result[base - 1] = '-';
				break;
			}
		}

		while(*result) {
			write(fd, result, 1);
			result++;
		}
	}
}

#include <stdio.h>

int main() {
	printf(" Testing ft_putnbr_fd.c\n------------------------\n");


	int foo = -2147483648;

	ft_putnbr_fd(foo, 2);

	return 0;
}
