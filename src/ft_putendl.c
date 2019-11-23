/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:15:48 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 15:17:43 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the standard output followed by a ’\n’.
*/

void	ft_putendl(char const *s)
{
	char nl;

	nl = '\n';
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, &nl, 1);
}
