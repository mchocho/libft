/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:33:17 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 14:32:13 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*val;
	size_t	i;

	i = 0;
	while (s1[i] && i != n)
		i++;
	if (!(val = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s1[i] && i != n)
	{
		val[i] = s1[i];
		i++;
	}
	val[i] = '\0';
	return (val);
}
