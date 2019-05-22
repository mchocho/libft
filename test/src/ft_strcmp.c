int ft_strcmp(const char *a, const char *b)
{
    while (*a && *b && *a == *b)
    {
        a++;
        b++;
        
    }
    return ((int)(*a) - (int)(*b));
}