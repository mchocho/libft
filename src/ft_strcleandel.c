#include "libft.h"

void	ft_strcleandel(char **str)
{
	ft_strclean(&(*str));
	free(*str);
}
