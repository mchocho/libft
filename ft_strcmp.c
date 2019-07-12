/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:47:29 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/12 08:46:52 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() and strncmp() functions lexicographically compare the
** null-terminated strings s1 and s2.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2) 
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((int)((unsigned char)*s1) - (int)((unsigned char)*s2));
		s1++;
		s2++;
	}
	if (s1[0] == '\0' && s2[0] == '\0')
		return  ((int)((unsigned char)*s1) - (int)((unsigned char)*s2));
	return (0);
}
