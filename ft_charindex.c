/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:24:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/29 17:40:08 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_charindex(char c)
{
	if (ft_isuppercase(c))
		return ((int)(c - 'A'));
	else if (ft_islowercase(c))
		return ((int)(c - 'a'));
	else
		return (c);
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_charindex.c\n-----------------------------\n");

	printf("%c ---> %d\n", 'a', ft_charindex('a'));
	printf("%c ---> %d\n", 'c', ft_charindex('c'));
	printf("%c ---> %d\n", 'g', ft_charindex('g'));
	printf("%c ---> %d\n", 'x', ft_charindex('x'));
	printf("%c ---> %d\n", 'z', ft_charindex('z'));
	printf("%c ---> %d\n", 'A', ft_charindex('A'));
	printf("%c ---> %d\n", 'H', ft_charindex('H'));
	printf("%c ---> %d\n", 'Z', ft_charindex('Z'));
	return 0;
}
