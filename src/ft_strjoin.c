#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while(s1[i]) i++;

	while(s2[j]) j++;

	str = (char *)malloc(sizeof(char)*(i + j));

	if (!str) return (NULL);

	while(k < i) {
		str[k] = s1[k];
		k++;
	}

	i = 0;
	
	while(i < j) {
		str[k] = s2[i];
		k++;
		i++;
	}
	str[k] = '\0';

	return (str);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strjoin.c\n------------------------------------\n");

	char *foo = "Hello";

	char *fubu = " Bitch!";

	char *bar = ft_strjoin(foo, fubu);

	printf("Result returned: %s\n", bar);

	return 0; 

}