/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:03:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/04 18:44:39 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL
*/

char		*ft_checkminmaxint(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	else
		return (NULL);
}

char		*ft_inttochar(int n, char *result, int base)
{
	int len;
	int temp;
	
	temp = n;
	len = base;
	if (n == 0)
	{
		result[0] = '0';
		result[1] = '\0';
	} else {
		if (temp < 0)
			temp = temp * -1;
		while (base--)
		{
			result[base] = (temp % 10) + '0';
			temp = temp / 10;
			if (n < 0 && base == 1)
				break ;	
		}
	}
	result[len] = '\0';
	return (result);
}

int		ft_basesize(int base, int n)
{
	if (n < 0)
	{
		base++;
		n = n * -1;
	}
	while (n)
	{
		base++;
		n = n / 10;
	}
	if (n == 0)
		base++;
	return (base);

}

int		ft_addsign(char *res, int i)
{
	res[i] = '-';
	return (i++);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		base;
	int		i;
	int		len;

	base = -1;
	i = 0;
	if (n == 2147483647 || n == -2147483648)
		return ft_checkminmaxint(n);	
	base = ft_basesize(base, n);
	if (!(result = (char *)malloc(sizeof(char) * (base + 1))))
		return NULL;
	if (n < 0)
		i = ft_addsign(result, i);
	temp = n;
	len = base;
	result = ft_inttochar(n, result, base);
	if (n != 0)
		result[len] = '\0';
	return (result);
}
