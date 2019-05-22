char *ft_strcpy(char *dest, const char *src)
{
    int i;
    int len;
    
    len = 1;
    i = 0;
    
    while (src[i] != '\0')
    {
        i++;
        len++;
    }
    
    i = 0;
    dest = (char *)(malloc(len * sizeof(char)));
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return (dest);
}