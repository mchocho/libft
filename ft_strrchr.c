/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:16:46 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 17:20:27 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strrchr() function is identical to strchr(), except it locates the
** last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	else if (j > -1)
		return ((char *)s + j);
	else
		return (NULL);
}
