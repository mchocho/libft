/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:34:18 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/23 16:04:43 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memalloc(size_t size) {
	void *mem = (void *) malloc(size);

	if (mem == '\0') return (NULL);
	else return (mem);
}

#include <stdio.h>

int main() {

	printf(" Testing ft_memalloc\n------------------------\n");

	char *str = ft_memalloc(3);

	str = "Hello bitch! This is C programming";

	printf("Result should be: %s\n", str);

	return (0);
}