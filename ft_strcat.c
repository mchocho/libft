/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:32:46 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/27 15:57:52 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(s1[i] != '\0') i++;

	while (s2[j] != '\0') {
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';

	return (s1);
}

#include <stdio.h>
#include <string.h>

int main() {
	printf(" Testing ft_strcat\n--------------------\n");

	char *foo = "Even when ";

	char *fubu = "I lie!";

	printf("Result should be: %s\n", strcat(foo, fubu));

	printf("Test returned: %s\n", ft_strcat(foo, fubu));

	return 0;
}
