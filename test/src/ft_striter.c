void	ft_striter(char *s, void (*f)(char *))
{
	while (*s) {
		f(s);
		s++;
	}
}

void ft_sayhi(char fubu) {
	fubu = 'i';
}


#include <stdio.h>

int main() {
	printf(" Testing striter.c\n----------------------\n");


	char *foo = "Hello Bitch";

	ft_striter(foo, ft_sayhi);

	printf("Result returned: %s\n", foo);

	return 0;
}
