/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtail.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:50:29 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/19 14:57:33 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_addtail(l_list **list, char *str, size_t length)
{
	t_line *line;

	if (*list == NULL || !((line) = (t_line *)malloc(sizeof(t_line))))
		return ;
	line->str = ft_strdup(str);
	line->length = length;
	line->next = NULL;
	if ((*list)->head == NULL)
		(*list)->head = line;
	else
		(*list)->tail->next = line;
	(*list)->tail = line;
}
