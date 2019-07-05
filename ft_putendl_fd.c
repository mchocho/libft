/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:13:12 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 14:55:47 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd followed by a ’\n’.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	char nl;

	nl = '\n';
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &nl, 1);
}
