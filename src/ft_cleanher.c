/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleanher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:33:23 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/31 10:27:28 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_cleanher(l_list **list, int all)
{
	t_line	*next;

	if (*list == NULL)
		return ;
	(*list)->current = (*list)->head;
	next = (*list)->current->next;
	ft_strcleandel(&(*list)->current->str);
	(*list)->current->length = 0;
	(*list)->current->next = NULL;
	free((*list)->current);
	(*list)->head = next;
	(*list)->current = (*list)->head;
	if (all)
	{
		(*list)->tail = NULL;
		free(*list);
		*list = NULL;
	}
}
