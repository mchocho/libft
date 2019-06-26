/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:40:38 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
 * representing the integer n given as argument. Negative numbers must be supported.
 * If the allocation fails, the function returns NULL.
 */

char	*ft_itoa(int n)
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

	if (n == -2147483648) return ("-2147483648");
	else if (n == 2147483647) return ("2147483647");

	//Check for sign
	if (n < 0) {
		base++;
		temp = temp * -1;
		printf("Provided a negative value\n");
	} else {
		printf("Provided a positive value\n");
	}

	//if (n < 0) temp = temp * -1;

	while(temp) {
		base++;
		temp = temp / 10;
	}
	printf("Provided number has a base %d\n", base);

	if (n == 0) base++;

	result = (char *)malloc(sizeof(char) * (base + 1));

	if (n < 0) {
		result[i] = '-';
		i++;
	}

	temp = n;
	len = base;

	if (n < 0) temp = temp * -1;

	//Check for 1 base values
	if(n == 0) {
		result[--base] = '0';
		result[1] = '\0';
		return (result);
	} else {
		while(base--)  {
			/*if ((temp % 10) == 0) result[base] = '0';
			else*/ result[base] = (temp % 10) + '0';
			temp = temp / 10;
			if (n < 0 && base == 1) break;
		}
	}

	result[len] = '\0';

	return (result);
}
