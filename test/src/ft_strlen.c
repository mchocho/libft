int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    
    while (*s)
    {
        s++;
        i++;
    }
    return (i);
}