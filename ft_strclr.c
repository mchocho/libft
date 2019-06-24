/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:42:26 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/05 17:04:50 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strclr(char *s)
{
	while(*s) {
	   	*s = '\0';
		s++;
	}
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strclr.c\n-------------------------------\n");

	char foo[50] = "Some long ass string";

	printf("Result before ft_strclr: %s\n", foo);

	ft_strclr(foo);

	printf("Result returned: %s\n", foo);

	return 0;
}
