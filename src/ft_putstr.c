/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 16:26:38 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 16:31:35 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Outputs the string s to the file descriptor fd.
*/

void	ft_putstr(char const *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
