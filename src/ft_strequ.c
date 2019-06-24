/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:07:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/24 12:14:21 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	while(*s1 && s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

#include <stdio.h>

int main() {
	char *foo = "Hello Motherfucker";

	char *fubu = "Hello Motherfucka";

	int res = ft_strequ(foo, fubu);

	printf("Result of ft_strequ: %d\n", res);

	return 0;
}
