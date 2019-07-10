#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list list;
	t_list nlist;

	list = lst;
	while (list)
	{
		nlist = list->next;
		f(list);
		list = nlist;
	}
}
