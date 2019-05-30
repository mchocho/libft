#include <stdlib.h>

char *ft_strncpy(char *dest, const char *src, size_t size)
{
    size_t i;
    
    i = 0;    
    dest = (char *)(malloc((size + 1) * sizeof(char)));
    
    while (src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return (dest);
}

#include <stdio.h>
#include <string.h>


int main() {
	printf(" Testing ft_strncpy\n--------------------\n");

	char foo[10] = "Sam\tsung";

	char fubu[10];

	char fooboo[10];

	int i = 10;

	printf("Result should be: %s\n", strncpy(fubu, foo, i));

	printf("Test returned: %s\n", ft_strncpy(fooboo, foo, i));

	return 0;
}
