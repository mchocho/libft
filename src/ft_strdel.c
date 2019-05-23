/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:09:45 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/23 16:57:38 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void ft_strdel(char **as) {
	free((void *)as);
	
	**as = '\0';

	return;
}

#include <stdio.h>

int main() {
	char *str = "Hello world!";

	char **arr =  str;

	printf(" Testing ft_strdel\n----------------------\n");

	printf("Result before function call: %s\n", str);

	ft_strdel(arr);

	printf("Result after function call: %s\n", str);

	return (0);
}
