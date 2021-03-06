/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:38:49 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 16:29:54 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Applies the function f to each character of the string given as argument
** to create a “fresh” new string (with malloc(3)) resulting from the successive
** applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	char	*ptr;
	int		i;

	if (!*s || !f)
		return (NULL);
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
		i++;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		res[i] = f(ptr[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
