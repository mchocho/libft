/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichrfromindex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:40:19 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 14:41:55 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strichrfromindex() is similar to strichr(), except it begins the
** search for c starting from index n. If n referencesban index that
** doesn't exist we return -1.
*/

int	ft_strichrfromindex(const char *s, int c, unsigned int n)
{
	while (s[n])
	{
		if (s[n] == (char)c)
			return (n);
		n++;
	}
	if ((char)c == '\0' && s[n] == '\0')
		return (n);
	return (-1);
}
