#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;

	if (!*s || !c)
		return (NULL)
	if (!(str = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i] && i < ft_strlen(s) + 1)
			i++;
		if (i > j)
			str[k++] = ft_strsub(s, j, (i - j));

	}
	str[k] = NULL;
	return (str);
}
