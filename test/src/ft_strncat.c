char *ft_strncat(char *dest, const char *src, unsigned int size)
{
    int i;
    int len;
    int temp;
    
    char *d = dest;
    char *s = (char*)(src);

    i = 0;
    len = 0;
    
    while (d[i] != '\0')
    {
        i++;
    }
    len = --i;
    i = 0;

    while (s[i] != '\0' && i < size)
    {
        d[len + i] = s[i];
        i++;
    }
    d[len + i] = '\0';

    return (d);
}