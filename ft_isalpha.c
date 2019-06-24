/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:51:39 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/27 11:13:04 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	return (c >= 65 && c <= 122);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_isalpha\n-------------------------\n");

	printf("A --> %d\n", ft_isalpha('A') );
	printf("B --> %d\n", ft_isalpha('B') );
	printf("C --> %d\n", ft_isalpha('C') );
	printf("a --> %d\n", ft_isalpha('a') );
	printf("b --> %d\n", ft_isalpha('b') );
	printf("c --> %d\n", ft_isalpha('c') );
	printf("1 --> %d\n", ft_isalpha('1') );
	printf("2 --> %d\n", ft_isalpha('2') );
	printf("& --> %d\n", ft_isalpha('&') );
	printf("( --> %d\n", ft_isalpha('(') );

	return 0;
}
