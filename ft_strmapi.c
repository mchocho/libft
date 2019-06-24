/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:21:17 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 18:14:04 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	char			*ptr;

	if (!*s || !f)
		return (NULL);

	ptr = (char *)s;
	i = 0;

	while(ptr[i])
		i++;
	
	if (!(res = (char *)malloc(sizeof(char) * i)))
		return (NULL);

	while(ptr[i]) {
		res[i] = f(i, ptr[i]);
		i++;
	}

	return (res);
}

char sayhi(unsigned int i, char foo) {
	printf("Index %d says Hi! Result is %c\n", i, foo);
	return (foo);
}

int main() {
	printf(" Testing ft_strmapi.c\n----------------------\n");

	char foo[] = "Hello Bitch!";

	ft_strmapi(foo, sayhi);

	return 0;

}
