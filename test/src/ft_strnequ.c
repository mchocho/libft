#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	
	i = 0;

	while(*s1 && *s2 && i < n) {
		if (s1 != s2) return (0);
		s1++;
		s2++;
		i++;
	}
	return (1);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strnequ\n----------------------\n");

	char *foo = "Hllo Bitch!";

	char *fubu = "Hello Bitch!";

	printf("String 1: %s\n", foo);

	printf("String 2: %s\n", fubu);

	int res = ft_strnequ(foo, fubu, 4);
		
	printf("Result returned %d\n", res);

	return 0;

}
