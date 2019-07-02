#include "../../libft.h"

t_list *ft_initialiselist()
{
	t_list *list;

	if (!(list = (t_list)malloc(sizeof(t_list))))
		return (NULL);

	list->content = NULL;
	list->content_size = 0;
	list->next = NULL;

	return (list);
}

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list nlist;
	nlist = ft_initialiselist();

	if (nlist == NULL)
		return (NULL);

	if (*content) {
		ft_memcpy(nlist->content, content, content_size);
		nlist->content_size = content_size;
	}

	return (nlist);
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_lstnew.c\n----------------------\n");

	char *fubu = "Hello world!!!!!!!!!!!!";

	t_list foo = ft_lstnew(fubu, 7);

	printf("Size of variable foo: %d\n", sizeof(foo));

	printf("Content return: %s\n", foo->content);

	printf("Foo's content size returned: %zu\n", foo->content_size);

	return (0);
}
