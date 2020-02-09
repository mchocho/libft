/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:33:25 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/31 10:33:45 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strsplice(l_list **list, int i)
{
	char	*str;
	char	*temp;
	int		length;

	str = (*list)->current->str;
	length = (*list)->current->length;
	temp = ft_strsub(str, i, length - i);
	ft_strcleandel(&str);
	(*list)->current->str = temp;
	(*list)->current->length = length - i;
	return ;
}
