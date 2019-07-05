#include "libft.h"
#include <stdio.h>

/*
**  This function finds the last occurence of c
**  (converted to a char) in the string pointed to
**  by string (including the terminating null character).
*/

char *ft_strrchr(const char *s, int c)
{
	int i;
	
	i = 0;

	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)(s + i));
	while (s[i - 1] && i > -1)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

#include <string.h>

int main() {
	printf(" Testing ft_strrch.c\n------------------------------\n");

	char *str = "Hello Ya Biiiiiiich";

	printf("Result should be: %s\n", strrchr(str, 'Y'));

	printf("Test returned: %s\n", ft_strrchr(str, 'Y'));

	return (0);

}
