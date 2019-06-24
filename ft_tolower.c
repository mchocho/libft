/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:41:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 13:53:08 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lower(int c) {
	if (c >= 65 && c <= 90) return (c + 32);
	else return c;
}

#include <stdio.h> 

int main() {
	printf(" Testing ft_tolower\n---------------\n");

	printf("A ---> %c\n", ft_lower('A') );

	printf("B ---> %c\n", ft_lower('B') );
	printf("C ---> %c\n", ft_lower('C') );
	printf("D ---> %c\n", ft_lower('D') );
	printf("E ---> %c\n", ft_lower('E') );
	printf("F ---> %c\n", ft_lower('F') );
	printf("G ---> %c\n", ft_lower('G') );
	printf("H ---> %c\n", ft_lower('H') );
	printf("I ---> %c\n", ft_lower('I') );
	printf("J ---> %c\n", ft_lower('J') );
	printf("K ---> %c\n", ft_lower('K') );	
	printf("L ---> %c\n", ft_lower('L') );
	printf("M ---> %c\n", ft_lower('M') );
	printf("N ---> %c\n", ft_lower('N') );
	printf("O ---> %c\n", ft_lower('O') );
	return 0;

}
