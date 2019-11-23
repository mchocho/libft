/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpaddedstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:40:22 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 14:35:56 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putpaddedstr(char *str, size_t width)
{
	size_t i;
	size_t j;

	i = width - ft_strlen(str);
	j = 0;
	while (j < i)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putstr(str);
	return ;
}
