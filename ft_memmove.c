/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:51:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/30 10:50:32 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
