#include <stdlib.h>

char *ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;

	while(s[i]){
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') j++;
		i++;
	}

	str = (char *)malloc(sizeof(char)*j);

	if (!str) return (NULL);

	i = 0;
	j = 0;

	while(s[i]) {
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
			str[j] = s[i];
			j++;
		}
		i++;
	}

	return (str);
}

#include <stdio.h>

int main() {

	printf(" Testing ft_strtrim.c\n--------------------------------\n");

	char *foo = "             Hello Bitch! \t";

	printf("Result before strtrim: %s\n", foo);

	ft_strtrim(foo);

	printf("Result after strtrim: %s\n", foo);

	return 0;
}
