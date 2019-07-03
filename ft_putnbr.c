/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:52:16 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 15:22:15 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
** Outputs the integer n to the standard output.
*/

void ft_putnbr(int n) {
	char *result;
	int temp;
	int base;
	//int len;
	int i;

	temp = n;
	base = 0;
	i = 0;

	if (n == -2147483648 || n == 2147483647) {
		temp = (n < 0) ? 11 : 10;
		result = (char *)malloc(sizeof(char) * temp);
		if (!result) return;
		result = (n < 0) ? "-2147483648" : "2147483647";
		while(*result) {
			write(1, result, 1);
			result++;
		}
		return;
	}
	
	

	//Check for value 0
	if (n == 0) {
		result = (char *)malloc(sizeof(char) * 2);
		if (!result) return;
		result[0] = '0';
		result[1] = '\0';
		while(*result) {
			write(1, result, 1);
			result++;
		}
		//write(1, (&result), 1);
		return;
	}
	
	while(temp) {
		base++;
		temp = temp / 10;
	}

	//Reset temp variable
	temp = n;

	if (n < 0) {
		temp = (temp) * -1;
		//result[i] = '-';
		//i++;
		base++;
	}

	//printf("Provided number has a base: %d\n", base);

	//Dynamically create string
	result = (char *)malloc(sizeof(char) * base);
	if (!result) return;

	//len = base;

	//Add null terminator
	result[base] = '\0';

	//Check for remaining digits
	while(base--) {
		/*if (n < 0 && base == 1) {
			result[base - 1] = '-';
			break;
		}*/
		result[base] = (temp % 10) + '0';
		temp = temp / 10;
		if (n < 0 && base == 1) {
			result[base - 1] = '-';
			break;
		}
	}

	while(*result) {
		write(1, result, 1);
		result++;
	}
}
