char *ft_strdup(const char *s) {
    char *n;
    int i;
    int len;
    
    len = 1;
    i = 0;
    
    while (s[i] != '\0')
    {
        i++;
        len++;
    }    

    i = 0;
    n = (char *)(malloc(len * sizeof(char)));
    
    while (s[i] != '\0')
    {
        n[i] = s[i];
        i++;
    }
    n[i] = '\0';
    
    return (n);
}