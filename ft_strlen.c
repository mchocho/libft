/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:23:15 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 16:45:11 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlen() function computes the length of the string s. The strnlen()
** function attempts to compute the length of s, but never scans beyond the
** first maxlen bytes of s.
*/

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
