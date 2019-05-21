/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:58:47 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/21 14:17:06 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_bzero(void *s, size_t n) {
	unsigned char *str;
	size_t i;
	size_t j;

	str = s;
	i = 0;
	j = 0;

	while (*str++) {
		j++;
	}
	while(i < n) {
		str[j--] = '\0';
		i++;
	}
	return;// (s);
}

#include <string.h>

int main() {
	char *foo = "We think code rocks!"; 

	//char *foo1 = "We think code rocks!";
	
	bzero(foo, 5);

	//ft_bzero(foo, 5);

	printf("Result should be: %s \n", foo);

	//printf("Test returned: %s \n", foo1);

	return 0;
}

