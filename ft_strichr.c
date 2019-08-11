#include "libft.h"

/*
** The strichr() function is similar to strchr(), except that it
** locates the index of first occurrence of c (converted to a char)
** in the string pointed to by s. If c is not found we return -1
*/

int	ft_strichr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	if ((char)c == '\0')
		return (i);
	return (-1);
}
