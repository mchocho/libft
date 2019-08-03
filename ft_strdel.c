/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:45:57 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/09 15:49:15 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (as != NULL || *as != NULL)
		free(*as);
	*as = NULL;
}
