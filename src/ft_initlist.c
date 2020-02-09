/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:22:52 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/19 14:36:30 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_initlist(l_list **list)
{
	if (*list == NULL)
		return ;
	(*list)->current = NULL;
	(*list)->head = NULL;
	(*list)->tail = NULL;
	return ;
}
