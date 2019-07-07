#include "libft.h"

/*
**  This function finds the last occurence of c
**  (converted to a char) in the string pointed to
**  by string (including the terminating null character).
*/

char *ft_strrchr(const char *s, int c)
{
	int i;
	int p;

	i = 0;
	p = -1;
	while (s[i])
	{
		if (s[i] == c)
			p = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (i > -1)
		return ((char *)(s + p));
	return (NULL);
}
