/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:05:37 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 14:41:11 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the alloca- tion fails, the function
** returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	char *mem;

	if (!(mem = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	*mem = 0;
	return (mem);
}
