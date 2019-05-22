char *ft_strncpy(char *dest, const char *src, unsigned int size)
{
    int i;
    
    i = 0;    
    dest = (char *)(malloc((size + 1) * sizeof(char)));
    
    while (src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return (dest);
}