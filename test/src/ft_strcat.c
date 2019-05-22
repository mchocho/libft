char *ft_strcat(char *dest, const char *src) {
    char *d;    
    char *s;
    int i;
    int len;
    
    d = dest;
    s = (char*)(src);
    i = 0;
    len = 0;
    
    while (d[i] != '\0')
    {
        i++;
    }
    len = --i;
    i = 0;

    while (s[i] != '\0')
    {
        d[(len + i)] = s[i];
        i++;
    }
    d[(len + i)] = '\0';
       
    return (d);
}