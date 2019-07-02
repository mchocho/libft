/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:28:22 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/30 10:22:41 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*cpy;
	char	*val;
	size_t	i;

	cpy = (char *)dst;
	val = (char *)src;
	i = 0;
	while (i < n && val[i])
	{
		cpy[i] = val[i];
		if (val[i] == (unsigned char)c)
			break ;
		i++;
	}
	cpy[i + 1] = '\0';
	return (dst);
}
