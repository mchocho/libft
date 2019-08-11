/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:12:45 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/10 16:20:18 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_initlist(void)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->content = NULL;
	list->content_size = 0;
	list->next = NULL;
	return (list);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;

	nlist = ft_initlist();
	if (nlist == NULL)
		return (NULL);
	if (content != NULL)
	{
		ft_memcpy(nlist->content, content, content_size);
		nlist->content_size = content_size;
	}
	return (nlist);
}

int main()
{
	char *data = "This is our content";

	t_list *list = ft_lstnew(data, 9);
	
	if (list)
	{}

	return 0;
}
