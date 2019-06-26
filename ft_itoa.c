/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/05 16:33:12 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocate (with malloc(3)) and returns a “fresh” string end-ing with’\0’
 * representing the integer n given as argument. Negative numbers must be supported.
 * If the allocation fails ,the function returns NULL.
 */

char	*ft_itoa(int n)
{
	char *result;
	int temp;
	int base;
	int i;
	int len;

	base = 0;
	result = 0;
	i = 0;
	temp = n;

	if (n == -2147483648) return ("-2147483648");
	else if (n == 2147483647) return ("2147483647");

	if (n < 0) {
		base++;
		temp = temp * -1;
	}

	while(temp) {
		base++;
		temp = temp / 10;
	}

	if (n == 0) base++;

	result = (char *)malloc(sizeof(char) * (base + 1));

	if (n < 0) {
		result[i] = '-';
		i++;
	}

	temp = n;
	len = base;

	if (n < 0) temp = temp * -1;

	if(n == 0) {
		result[--base] = '0';
		result[1] = '\0';
		return (result);
	} else {
		while(base--)  {
			result[base] = (temp % 10) + '0';
			temp = temp / 10;
			if (n < 0 && base == 1)
				break;
		}
	}

	result[len] = '\0';

	return (result);
}
