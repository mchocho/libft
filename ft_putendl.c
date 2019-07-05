/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:46:05 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 14:52:27 by mchocho          ###   ########.fr       */
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
