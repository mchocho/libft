/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:24:49 by mchocho           #+#    #+#             */
/*   Updated: 2019/08/13 18:53:22 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnewstr(const char *str)
{
	char	*val;
	int		i;

	i = 0;
	while(str[i])
		i++;

	if (i > 1)
		i -= 1;

	if (!(val = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	val = (char *)str;
	return (val);
}
