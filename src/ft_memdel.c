/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:07:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/07 17:23:41 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>


void ft_memdel(void **ap)
{
	char **list;

	list = (char**)ap;

	while(**list)
	{
		free(*list);
		list++;
	}
	**list = '\0';
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_memdel.c\n------------------------------\n");

	char **foo = NULL;

	char *fubu = "Hello";

	char *bar = " world";

	*foo = fubu;

	*foo++ = bar;	

	return 0;
}
