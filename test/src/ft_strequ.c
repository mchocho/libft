int ft_strequ(char const *s1, char const *s2)
{
	if (*s1 == '\0' || *s2 == '\0') return 0;
	while(*s1 && *s2) {
		if(s1 != s2) return (0);
		s1++;
		s2++;
	}
	return (1);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strequ.c\n-------------------\n");

	char *fubu = "Hello Bitch!";

	char *foo = "Hello Bitch!";

	int res = ft_strequ(fubu, foo);

	printf("String 1: %s\n", fubu);

	printf("String 2: %s\n", foo);

	printf("ft_strequ returned result: %d\n", res);

	return (0);
}
