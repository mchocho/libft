/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:41:51 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/11 11:11:51 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_checkminmaxint(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	return (NULL);
}

char	*ft_inttochar(int n, char *result, int base)
{
	int len;
	int temp;

	temp = n;
	len = base;
	if (n == 0)
	{
		result[0] = '0';
		len = 1;
	}
	else
	{
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
	if (base == -2147483648)
		return (11);
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
	char		*result;
	int			base;
	int			i;
	int			len;

	base = -1;
	i = 0;
	if (n == 2147483647 || n == -2147483648)
		return (ft_checkminmaxint(n));
	base = ft_basesize(base, n);
	if (!(result = (char *)malloc(sizeof(char) * (base + 1))))
		return (NULL);
	if (n < 0)
		i = ft_addsign(result, i);
	len = base;
	result = ft_inttochar(n, result, base);
	if (n != 0)
		result[len] = '\0';
	return (result);
}
