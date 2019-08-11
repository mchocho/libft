#include "libft.h"

/*
** The strichrfromindex() is similar to strichr(), except it
** begins the search starting from index n. If n references
** an index that doesn't exist we return -1.
*/

int	ft_strichrfromindex(const char *s, int c, unsigned int n)
{
	while (s[n])
	{
		if (s[n] == (char)c)
			return (n);
		n++;
	}
	if ((char)c == '\0' && s[n] == '\0')
		return (n);
	return (-1);
}
