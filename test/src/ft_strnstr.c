/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:23:04 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/30 17:33:16 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    	if ()!*ne    

		size_t i;
		int j;
		int k;
		
		i = 0;
        j = 0;
        k = -1;

        while (haystack[i] != '\0' && i < len)
        {
                if (haystack[i] == needle[j])
                {
                        k = (int)i;
                        while (haystack[k] == needle[j]) {
                                if (needle[j++] == '\0') {
                                        return ((char *) haystack + i);
                                }
                                j++;
                                k++;
                        }
                }
                j = 0;
                k = -1;
                i++;
        }
        if (!*needle) {
                return ((char *)haystack);
        } else if (i == 0) {
                return ((char *)(haystack + i));
        } else {
                return (NULL);
        }
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf(" Testing ft_strnstr\n-------------------------\n");

	char foo[] = "Every dog has his day.";

	char *fubu = "dog";


	printf("Result should be: %s\n", strnstr(foo, fubu, 3));

	printf("Test returned: %s\n", ft_strnstr(foo, fubu, 3));

	return 0;
}
