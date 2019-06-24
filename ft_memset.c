/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:57:38 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/20 15:32:49 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;

	while (i < len)
	{
		*str = c;
		i++;
		str++;
	}

	return (b);
}

#include <string.h>

int main() {
	printf(" Testing ft_memset\n-----------------------------\n");

	char foo[50] = "Hello world";

	char fubu[50] = "Hello world";

	memset(foo + 6, 'k', 6);

	ft_memset(fubu + 6, 'k', 6);

	printf("Result should be: %s\n", foo);

	printf("Test returned: %s\n", fubu);

	return 0;
}
