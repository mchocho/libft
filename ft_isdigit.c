/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:53:36 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 17:15:02 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c) {
	return (c >= 48 && c <= 57);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_isdigit.c\n----------------------\n");

	printf("1 --> %d\n", ft_isdigit('1'));
	printf("2 --> %d\n", ft_isdigit('2'));
	printf("3 --> %d\n", ft_isdigit('3'));
	printf("4 --> %d\n", ft_isdigit('4'));
	printf("5 --> %d\n", ft_isdigit('5'));
	printf("a --> %d\n", ft_isdigit('a'));
	printf("b --> %d\n", ft_isdigit('b'));
	printf("& --> %d\n", ft_isdigit('&'));
	printf("^ --> %d\n", ft_isdigit('^'));
	return 0;
}
