/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/30 15:19:48 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_checkminmaxint(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	else
		return NULL;
}

static char		*ft_inttochar(int n, char *result, int base, int temp)
{
	if (n == 0)
	{
		result[0] = '0';
		result[1] = '\0';
	} else {
		while (base--)
		{
			result[base] = (temp % 10) + '0';
			temp = temp / 10;
			if (n < 0 && base == 1)
				break ;	
		}
	}
	return (result);
}

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

	if (n == 2147483647 || n == -2147483648)
		return ft_checkminmaxint(n);	
	if (n < 0)
	{
		base++;
		temp = temp * -1;
	}
	while(temp) {
		base++;
		temp = temp / 10;
	}
	if (n == 0)
		base++;
	if(!(result = (char *)malloc(sizeof(char) * (base + 1))))
		return NULL;
	if (n < 0)
	{
		result[i] = '-';
		i++;
	}
	temp = n;
	len = base;
	if (n < 0)
		temp = temp * -1;
	result = ft_inttochar(n, result, base, temp);
	if (n != 0)
		result[len] = '\0';
	return (result);
}
