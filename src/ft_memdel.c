/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:07:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 16:20:37 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>


void ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
		free(*ap);
	*ap = NULL;
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
