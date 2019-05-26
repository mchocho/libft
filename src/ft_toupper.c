/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:55:50 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 14:15:50 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c) {
	if (c >= 97 && c <= 122) return (c - 32);
	else return (c);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_toupper\n--------------------\n");
	printf("a -> %c\n", ft_toupper('a'));
	printf("b -> %c\n", ft_toupper('b'));
	printf("c -> %c\n", ft_toupper('c'));
	printf("d -> %c\n", ft_toupper('d'));
	printf("e -> %c\n", ft_toupper('e'));
	printf("f -> %c\n", ft_toupper('f'));
	printf("g -> %c\n", ft_toupper('g'));
	printf("h -> %c\n", ft_toupper('h'));
	printf("i -> %c\n", ft_toupper('i'));
	printf("j -> %c\n", ft_toupper('j'));
	printf("k -> %c\n", ft_toupper('k'));
	printf("l -> %c\n", ft_toupper('l'));
	printf("m -> %c\n", ft_toupper('m'));

	return (0);
}
