/******

Author: Malesela Chocho (Some guy who doesn't have access to vim)

******/

int ft_atoi(const char *str)
{

    // WRONG!!!!


    int sign;
    int res;
    int i;
    
    sign = 1;
    res = 0;
    i = 0;
    
    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
    {
        i++;
    }
    
    if (str[i] == '-')
        sign = -1;
        
    if (str[i] == '-' || str[i] <= '+')
        i++;
        
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    res = res * sign;
    
    return (res);
}