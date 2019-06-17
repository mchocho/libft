#include <stdlib.h>

void *ft_memmove(void *dest, void *src, size_t n) {
	char *str;
	int len;
	size_t i;

	len = 0;
	i = 0;

	while(*src++) {
		len++;
	}

	str = (char *)malloc(len * sizeof(char));

	len = 0;

	while(src[len] != '\0') {
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';

	while(str[i] != '\0') {
		dest[i] = str[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

#include <string.h>

int main() {
	printf(" Testing ft_memmove.c\n-------------------------\n");

	void *foo = (void *)"Hello world";

	void *fubu = (void *)"Hello motherfucker";

	printf("Result should be: %s\n", (char *)memmove(foo, fubu, 30));

	
	printf("Test returned: %s\n", (char *)ft_memmove(foo, fubu, 30));
	
	return (0);
}
