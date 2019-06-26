
/*
 * The atoi() function converts the initial portion of the string
 * pointed to by nptr to int. The behavior is the same as
 *
 * strtol(nptr, NULL, 10);
 * except that atoi() does not detect errors.
 */

int ft_atoi(const char *str) {
    int result;
    int sign;
    int i;
    
    result = 0;
    sign = 1;
    i = 0;
    
    if(*str == '\0')
	    return (result);
    
    //Skip all whitespace
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '0')
	    i++;
    
    if(str[i] == '-') { //Check for sign
        sign = -1;
        i++;
    }
    
    while(str[i]) {
        if (str[i] >= 48 && str[i] <= 57) {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	else
		break;
    }
    
    return (sign * result);
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Testing ft_atoi\n--------------------------\n");
    
    char num[] = "01791451";
    
    printf("Result should be: %d\n", atoi(num));
    
    printf("Test returned: %d\n", ft_atoi(num));

    return 0;
}
