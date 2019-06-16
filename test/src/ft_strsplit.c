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
	int k;

	i = 0;
	//fchar = 0;
	count = 0;
	ldelimiter = -1;
	j = 0;
	//k = 0;

	while(*s) {
		if (*s == c && ldelimiter != -1)
			count++;
		s++;
		i++;		//Find length of string in case no delimiter is found 
	}
	//iif (count == 0) return (NULL);
	
	//ldelimiter = 1;
	if (/*count == 0 ||*/ !(result = (char **)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	else if (count == 0) {
		if (!(result = (char **)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		while(*s) {
			value = (char *)s;
			i++;
			s++;
		}
		**result = *value;
	} else {
		
		//ldelimiter = 1;
	
		while(s[i]) {
			if (s[i] == c) {						//Delimiter found
				j = i + 1;							//Mark the current index
				while(s[j] != c) j++;				//Count length of string until next delimiter
				if (j > (i + 1)) {					//A valid string was found
					fchar = i + 1;					//Mark first valid position of string
					k = 0;
					if (!(value = (char *)malloc(sizeof(char) * ((j - i) + 1))))
						return (NULL);	//Allocate string space
					while(fchar < j) {		//Loop through the valid substring
						value[k] = s[fchar];
						fchar++;
						k++;
					}
					**result = *value;	//Allocate string value to array
					result++;
					//fchar = -1;
				}
			}
			i++;
		}
	}
	result++;
	**result = '\0';
	return (result);
}

#include <stdio.h>

int main() {
	printf(" Testing ft_strsplit.c\n-------------------------------\n");

	int i = 0;
	int j = 0;

	//char **res;
	char *foo = "Hello world u are too God to me yo.";

	char d = ' ';

	char **res = ft_strsplit(foo, d);
	
	printf("Result of array will be: \n");

	while(res[i] != '\0') {
		while(res[i][j] != '\0') {
			printf("Index %d with value: %c\n", j, res[i][j]);
			j++;
		}
		i++;
	}

	printf("End of ft_strsplit.c test\n");

	return(0);
}
