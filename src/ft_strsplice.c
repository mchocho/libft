#include "../includes/libft.h"

void		 ft_strsplice(l_list **list, int i)
{
	char	*str;
	char	*temp;
	int	length;

	str = (*list)->current->str;
	length = (*list)->current->length;
	temp = ft_strsub(str, i, length - i);
	ft_strcleandel(&str);
	(*list)->current->str = temp;
	(*list)->current->length = length - i;
	return;
}
