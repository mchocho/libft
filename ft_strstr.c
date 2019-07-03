/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:30:46 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 18:09:15 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
				k++;
			}
		}
		j = 0;
		k = -1;
		i++;
	}
	if (i == 0)
		return ((char *)(haystack + i));
	return (NULL);
}
