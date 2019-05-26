/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:21:21 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 17:41:32 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcpy(char *dst, const char *src)
{
	int i;
	int len;

	len = 1;
	i = 0;

	while(src[i] != '\0') {
		i++;
		len++;
	}

	i = 0;
	dst = (char *)malloc(len * sizeof(char *));

	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (dst);
}

#include <stdio.h>

int main() {

	printf(" Testing ft_strcpy\n-------------------------\n");

	char *foo = "Hello bitch!";

	char *dst = "";

	ft_strcpy(dst, foo);

	printf("Result after strcpy is: %s\n", dst);

	return 0;
}
