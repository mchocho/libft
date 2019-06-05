/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/05 12:50:06 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
	char *result;
	int temp;
	int base;
	//int sign;
	int i;
	int len;

	base = 0;		//Assume zero based
	//sign = 1;
	result = 0;
	i = 0;

	temp = n;

	//Check for 0
	//if (n == 0) return ((char *)'0');

	//Check for sign
	if (n < 0) {
		base++;
		printf("Provided a negative value\n");
	} else {
		printf("Provided a positive value\n");
	}

	while(temp % 10) {
		base++;
		temp = temp / 10;
	}
	printf("Provided number has a base %d\n", base);

	result = (char *)malloc(sizeof(char) * (base + 1));

	if (n < 0) {
		result[i] = '-';
		i++;
	}

	temp = n;
	len = base;

	if (n < 0) temp = temp * -1;

	//Check for 1 base values
	if(temp >= -9 && temp <= 9) {
		result[i] = temp + '0';
	} else {
		while(base-- /*!= 1*/)  {
			if(n < 0 && base == 1) break;
			result[base] = (temp % 10) + '0';
			temp = temp / 10;
		}
	}

	result[len] = '\0';

	return (result);
}

//#include <stdio.h>

int main() {
	printf(" Testing ft_itoa.c\n----------------------\n");

	int n = 622898323;

	//char str[50] = ft_itoa(n);

	printf("Result before itoa: %d\n", n);

	printf("Result after itoa: %s\n", ft_itoa(n));

	return 0;
}
