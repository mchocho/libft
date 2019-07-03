/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:46:14 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 16:16:38 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3).
**
** If insufficient memory is available, NULL is returned and errno is set to
** ENOMEM.
**
** The strndup() function copies at most n characters from the string s1 always
** NUL terminating the copied string.
*/

char	*ft_strdup(const char *s1)
{
	char	*val;
	int		i;

	while (s1[i])
		i++;
	if (!(val = (char *)malloc(sizeof(i++))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		val[i] = s1[i];
		i++;
	}
	val[i] = '\0';
	return (val);
}
