/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:24:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 14:31:29 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charindex(char c)
{
	if (ft_isuppercase(c))
		return ((int)(c - 'A'));
	else if (ft_islowercase(c))
		return ((int)(c - 'a'));
	return (c);
}
