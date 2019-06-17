#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *result;
	unsigned int i;
	size_t j;

	i = start;
	j = 0;

	if (!s || (!(result = (char *)malloc(sizeof(char) * len + 1))))
		return (NULL);

	while(j < len && s[i]) {
		result[j] = s[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strsub.c\n-----------------\n");

	char *foo = "Yo wassup world, you're mine!";

	printf("Testing string: %s\n", foo);

	char *fubu = ft_strsub(foo, 10, 100);

	printf("Result returned: %s\n", fubu);

	return (0);

}
