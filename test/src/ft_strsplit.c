#include <stdlib.h>
#include <stdio.h>

static char *ft_strtoken(char *str, const char sep)
{
	/*
	 *	Detects the char "sep" in the string "str" and replaces
	 *	it with the '\0' termintator. ft_strtoken returns
	 *	a pointer to the next token in the string or NULL
	 *	if there are no more token
	 *
	 */

	while(*str) {
		if (*str == sep) {
			*str = '\0';
			str++;
			return (str);
		}
	}			
	return (NULL);
}

char **ft_strsplit(char const *s, char c)
{
	char **result;
	char *value;
	int len;

	len = 0;
	
	while(s[len])
		len++;
	
	if (!(value = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	
	value = (char *)s;
	value[len] = '\0';

	len = 0;

	while (value != NULL) {
		printf("%s\n", value);
		value = ft_strtoken(value, c);
		i++;
	}

	value = (char *)s;

	
	
	/*int toggle;
	int len;
	int start;
	int i;
	int j;

	len = 0;
	toggle = -1;
	i = 0;
	j = 0;

	while(*s) {
		if (*s == c && toggle != -1) {
			printf("A valid delimiter has been hit.");
			len++;
		}
		*s++;
		i++;		//Find length of string in case no delimiter is found 
	}
	
	if (!(result = (char **)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	
	while(s[i]) {
		if((s[i] == c || !s[i + 1]) && start != -1) {
			len = (i - start) + 1;
			j = 0;
			if (!(value = (char *)malloc(sizeof(char) * len)))
				return (NULL);
			while(start < i) {
				value[j] = s[start];
				start++;
				j++;
			}
			value[j] = '\0';
			printf("Result of string: %s\n", value);
			**result = *value;
			result++;
			start = -1;
		} else if (s[i] != c && start == -1) {
			start = i;
			printf("A new start index has been set.\n");
		}
		i++;
	}
	result++;
	**result = '\0'; */
	return (result);
}

//#include <stdio.h>

int main() {
	printf(" Testing ft_strsplit.c\n-------------------------------\n");

	//int i = 0;
	//int j = 0;

	//char **res;
	char foo[] = "Hello world This string should split up.";

	char d = ' ';

	char **res = ft_strsplit(foo, d);
	
	//printf("Result of array will be: \n");

	/*while(res[i] != '\0') {
		while(res[i][j] != '\0') {
			printf("Index %d with value: %c\n", j, res[i][j]);
			j++;
		}
		i++;
	}*/

	//printf("End of ft_strsplit.c test\n");

	return(0);
}
