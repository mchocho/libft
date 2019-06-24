/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:04:15 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/24 18:23:07 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;

	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);


	while((s1[i] || s2[i]) && i < n) {
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strnequ.c\n---------------------\n");

	char *foo = "Hello motherfucker";

	char fubu[] = "Hello mother";

	printf("String 1: %s\nString 2: %s\n", foo, fubu);

	int result = ft_strnequ(foo, fubu, 20);

	printf("Result returned: %d\n", result);	

	return 0;
}
