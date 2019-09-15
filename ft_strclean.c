#include "libft.h"

void ft_strclean(char *str)
{
	ft_strclr(str);
	ft_strdel(&str);
	return ;
}
