/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 16:01:48 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 16:25:18 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_inttochar(int n, char *result, int base)
{
	int len;
	int temp;

	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	temp = n;
	len = base;
	if (n == 0)
	{
		result[0] = '0';
		len = 1;
	}
	if (temp < 0)
		temp = temp * -1;
	while (base--)
	{
		result[base] = (temp % 10) + '0';
		temp = temp / 10;
		if (n < 0 && base == 1)
			break ;
	}
	result[len] = '\0';
	return (result);
}

static int		ft_basesize(int n)
{
	int base;

	if (n == 2147483647 || n == -2147483648)
	{
		if (n < 0)
			return (11);
		else
			return (10);
	}
	base = -1;
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

static int		ft_addsign(char *res, int i)
{
	res[i] = '-';
	return (i++);
}

void			ft_putnbr_fd(int n, int fd)
{
	char	*result;
	int		base;
	int		i;

	i = 0;
	base = ft_basesize(n);
	if (!(result = (char *)malloc(sizeof(char) * (base + 1))))
		return ;
	if (n < 0)
		i = ft_addsign(result, i);
	result = ft_inttochar(n, result, base);
	while (*result)
	{
		write(fd, result, 1);
		result++;
	}
}
