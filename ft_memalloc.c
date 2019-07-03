/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:34:18 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 14:31:03 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function returns
** NULL.
*/

void	*ft_memalloc(size_t size)
{
	char *mem;

	if (!(mem = (char *)malloc(sizeof(void) * size)))
		return (NULL);
	*mem = 0;
	return ((void *)mem);
}
