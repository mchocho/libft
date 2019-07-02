/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:21:17 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 18:14:04 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*res;
	char		*ptr;

	if (!*s || !f)
		return (NULL);

	ptr = (char *)s;
	i = 0;

	while(ptr[i])
		i++;	
	if (!(res = (char *)malloc(sizeof(char) * i++)))
		return (NULL);
	i = 0;
	while(ptr[i]) {
		res[i] = f(i, ptr[i]);
		i++;
	}
	res[i] = '\0';

	return (res);
}
