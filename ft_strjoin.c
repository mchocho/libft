/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:50:00 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 16:26:47 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	if (!(str = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}
	i = 0;
	while (i < j)
	{
		str[k] = s2[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
