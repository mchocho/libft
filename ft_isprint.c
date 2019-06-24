/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:16:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 14:48:25 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c) {
	return (c == ' ' || (c >= 33 && c <= 126));
}

#include <stdio.h>
#include <ctype.h>

int main() {
	printf(" Testing ft_isprint()\n---------------------\n");

	printf("a --> %d\n", ft_isprint('a'));
	printf("b --> %d\n", ft_isprint('b'));
	printf("c --> %d\n", ft_isprint('c'));
	//printf("% --> %d\n", ft_isprint('%'));
	printf("? --> %d\n", ft_isprint('?'));
	//printf("¥ --> %d\n", ft_isprint('¥'));
	//printf("¶ --> %d\n", ft_isprint('¶'));
	//printf("} --> %d\n", ft_isprint('}'));
	printf("4 --> %d\n", ft_isprint(5));
	printf("66 --> %d\n", ft_isprint(66));
}
