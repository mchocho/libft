/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 14:22:42 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 18:18:31 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	char *res;
	char *ptr;
	int i;

	if (!*s || !f)
		return (NULL);
	
	ptr = (char *)s;
	i = 0;

	while(ptr[i])
		i++;

	if (!(res = (char *)malloc(sizeof(char) * i++)))
		return (NULL);

	i = 0;

	while(ptr[i]) {
		res[i] = f(ptr[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

char sayhi(char foo) {
	printf("Hi! Result of foo: %c\n", foo);
	return foo;
}

int main() {
	printf(" Testing ft_strmap.c\n--------------------\n");
	
	char foo[] = "Hello world!";

	ft_strmap(foo, sayhi);

	return 0;	
}
