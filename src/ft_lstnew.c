/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:12:45 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 15:07:51 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;

	if (!(nlist = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	nlist->content = NULL;
	nlist->content_size = 0;
	nlist->next = NULL;
	if (content != NULL)
	{
		ft_memcpy(nlist->content, content, content_size);
		nlist->content_size = content_size;
	}
	return (nlist);
}
