#include <stdlib.h>
#include <stdio.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;

	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))) || s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	printf(" Testing ft_strsub.c\n----------------------------\n");
	
	char *str = "Hello Ya Biiiiich!\nHow are you world\tIt's the rise of the robots\nWake up and plug your\tself ..... in";

	char *res = ft_strsub(str, 20, 100);

	printf("Result returned: %s", res);
	
	return 0;

}
