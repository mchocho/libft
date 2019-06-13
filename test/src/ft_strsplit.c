#include <stdlib.h>

char **ft_strsplit(char const *s, char c)
{
	char **result;
	char *value;
	int ldelimiter;
	int count;
	int fchar;
	int i;
	int j;

	i = 0;
	//fchar = 0;
	count = 0;
	ldelimiter = -1;
	j = 0;

	while(*s) {
		if (*s == c && ldelimiter != -1)
			count++;
		s++;
	}

	if (count == 0) return (NULL);
	
	ldelimiter = 1;
	result = (char **)malloc(sizeof(char) * count + 1);

	while(s[i]) {
		if (s[i] == c) {
			j = i;
			while(s[j] != c) j++;	//Count length of string until next delimiter
			if (j > i) {	//A valid string was found
				fchar = i + 1;
				value = (char *)malloc(sizeof(char) * ((j - i) + 1));	//Allocate string space
				while(fchar < j) {		//Loop through the valid substring
					value[fchar] = s[j];
					fchar++;
				}
				result = &value;	//Allocate string value to array
				result++;
				fchar = -1;
			}
		}
		i++;
	}
	result++;
	result = '\0';
	return (result);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strsplit.c\n-------------------------------\n");

	char **res;

	char *foo = "Hello world";

	char *fubu = "Hello again";

	char d = " ";

	**res = &foo;

	res++;

	**res = &fubu;

	return(0);

	

}
