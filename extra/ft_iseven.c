/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseven.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:47:20 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/01 14:56:29 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iseven(int n)
{
	return(n % 2 == 0);	
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_iseven.c\n------------------------\n");

	int n = -22;

	char *res = (ft_iseven(n) == 1) ? "true" : "false";

	printf("Is %d is even: %s\n", n, res);

	return 0;
}
