#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list list;
	t_list nlist;

	list = *alst;
	while (list)
	{
		nlist = list->next;
		del(list->content, list->content_size);
		free(list);
		list = nlist;
	}
	*alist = NULL;
}
