/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:01:20 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/28 13:52:33 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	return (c >= 48 && c <= 122);
}

#include <stdio.h>
#include <ctype.h>

int main() {
	printf(" Testing ft_isalnum\n---------------------\n");

	int foo = '0';

	printf("Result should be: %d\n", isalnum(foo));

	printf("Test returned result: %d\n", ft_isalnum(foo));

	return 0;
}
