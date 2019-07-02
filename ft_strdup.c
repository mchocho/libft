/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:46:14 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/22 18:09:27 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1) {
	char *val;
	int i;

	while(s1[i])
		i++;

	if (!(val = (char *)malloc(sizeof(i++))))
		return (NULL);
	
	i = 0;
	while(s1[i])
	{
		val[i] = s1[i];
		i++;
	}
	val[i] = '\0';

	return (val);
}
