#include "libft.h"

char *ft_concatbuffers(char *str, char *buffer)
{
	char *temp;

	temp = ft_strjoin(str, buffer);
	ft_strclean(str);
	return (temp);
}
