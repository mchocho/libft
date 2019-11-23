int ft_strncmp(const char *a, const char *b, unsigned int size)
{
    int i;

    i = 0;
    while (*a && *b && *a == *b && i <= size)
    {
        a++;
        b++;
        i++;
        
    }
    return ((int)(*a) - (int)(*b));
}