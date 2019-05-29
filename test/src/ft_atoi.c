int ft_atoi(const char *str) {
    int result;
    int sign;
    int i;
    
    sign = 1;
    i = 0;
    
    if(*str == '\0') return (0);
    
    //Skip all whitespace
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '0') i++;
    
    if(str[i] == '-') { //Check for sign
        sign = -1;
        i++;
    }
    
    while(str[i]) {
        if (str[i] >= 48 && str[i] <= 57)
            result = result * 10 + (str[i] - 48);
        i++;
    }
    
    return (sign * result);
}

#include <stdlib.h>
#include <stdio.h>


int main()
{
    printf(" Testing ft_atoi\n--------------------------\n");
    
    const char num[20] = "1791";
    
    printf("Result should be: %d\n", atoi(num));
    
    printf("Test returned: %d\n", ft_atoi(num));

    return 0;
}