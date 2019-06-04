/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/04 17:12:44 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int n)
{
	char *result;
	int temp;
	int base;
	//int sign;
	int i;

	base = 1;
	//sign = 1;
	result = 0;
	i = 0;

	temp = n;

	//Check for 0
	if (n == 0) return ((char *)'0');

	//Check for sign
	if (n < 0) base++;

	while(temp % 10) {
		base++;
		temp = temp % 10;
	}
	base++;

	result = (char *)malloc(sizeof(char) * (base));

	if (n < 0) {
		result[i] = '-';
		i++;
	}

	temp = n;
	result[base] = '\0';

	while(base--) {
		if (n < 0 && base == 1) break;
		temp = temp % 10;
		result[base] = (char)temp;
	}

	return (result);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_itoa.c\n----------------------\n");

	int n = 55578;

	char *str = ft_itoa(n);

	printf("Result before itoa: %d\n", n);

	printf("Result after itoa: %s\n", str);

	return 0;
}
