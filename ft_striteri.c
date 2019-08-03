/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:26:28 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/10 16:28:05 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*ptr;
	unsigned int	i;

	if (!*s || !f)
		return ;
	ptr = s;
	i = 0;
	while (*ptr)
	{
		f(i, (char *)&(*ptr));
		ptr++;
		i++;
	}
}
