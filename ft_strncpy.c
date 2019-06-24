#include <stdlib.h>

char *ft_strncpy(char *dst, const char *src, size_t size)
{
    size_t i;
    
    i = 0;    
    
    while (src[i] != '\0' && i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    
    return (dst);
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
