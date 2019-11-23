char *ft_strchr(const char *s, int c) {
    int i;

    i = 0;
    
    while (*s++) {
        if (s == (char *)c) {
            return ((char *)s);
        }
        i++;
    }
    return ((char *)s);
}