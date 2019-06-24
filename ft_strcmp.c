/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:31:39 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/27 13:28:27 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(const char *s1, const char *s2)
{
	while(*s1 && *s2) {
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((int)*s1 - (int)*s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main() {
	printf(" Testing ft_strcmp\n------------------\n");

	char *foo = "Hey girl!";

	char *fubu = "Heyyy!";
	
	printf("Result should be: %d\n", strcmp(foo, fubu));

	printf("Test returned: %d\n", ft_strcmp(foo, fubu));
	
	return 0;
}
