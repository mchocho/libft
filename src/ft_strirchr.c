/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strirchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:50:49 by mchocho           #+#    #+#             */
/*   Updated: 2019/08/15 18:56:25 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strirchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if ((char)c == '\0')
		return (i);
	return (j);
}
