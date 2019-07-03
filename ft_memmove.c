/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:51:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 14:45:54 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*cpy;
	size_t	i;

	str = (char *)dst;
	cpy = (char *)src;
	i = 0;
	while (cpy[i] && i < len)
	{
		str[i] = cpy[i];
		i++;
	}
	return (dst);
}
