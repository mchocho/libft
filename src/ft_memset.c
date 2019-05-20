/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:57:38 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/20 15:32:49 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t		i;

	str = b;
	i = 0;

	while (i < len)
	{
		str[i] = c;
		i++;
	}

	return (b);
}
