/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:37:53 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 12:40:29 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fr_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)str;
	i = 0;
	while (str[i] && i < n)
	{
		str[i] = '\0';
		i++;
	}
}
