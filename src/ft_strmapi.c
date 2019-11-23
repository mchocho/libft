/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:39:52 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 16:30:36 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a “fresh” new string
** (with malloc(3)) resulting from the suc- cessive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char			*res;
	char			*ptr;

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
		res[i] = f(i, ptr[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
