/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:24:44 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/11 16:49:01 by mchocho          ###   ########.fr       */
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
	char	temp[len];
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	str = (char *)dst;
	cpy = (char *)src;
	i = 0;
	while (i < len)
	{
		temp[i] = cpy[i];
		i++;
	}
	i = 0;
	while (i < len && len > 0)
	{
		str[i] = temp[i];
		i++;
	}
	return (str);
}
