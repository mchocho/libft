#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*list)->content, (*alst)->size_content);
	free(*alst);
	*alst = NULL;
}
