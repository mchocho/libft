/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:51:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:46:46 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * The memmove() function copies len bytes from string src to string dst.  The two strings
 * may overlap; the copy is always done in a non-destructive manner.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	char 	*cpy;
	size_t	len;
	int		i;

	cpy;
	len = 0;
	i = 0;

	while(src[len] != '')
		len++;

	str = (char *)malloc(sizeof(char) * (len + 1));

	len = 0;

	while(src[len]) {
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	
	while(str[i]) {
		dest[i] = str[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
