#include "ft_ls.h"

void	ft_strcleandel(char **str)
{
	ft_strclean(&(*str));
	free(*str);
}
