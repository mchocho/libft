/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splicesubstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:07 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 15:10:51 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a fresh new copy of str with all instances of splice removed.
** 						INCOMPLETE
*/

char	*ft_splicesubstr(char *str, char *splice)
{
	char	*result;
	int		subcount;
	int		i;
	int		j;

	subcount = 0;
	i = 0;
	while ((i = ft_stristrfromindex(str, splice, i)) > -1)
	{
		subcount++;
		i++;
	}
	if (subcount == 0)
		return (ft_strdup(str));
	result = ft_strnew(ft_strlen(str) - (subcount * ft_strlen(splice)));
	i = 0;
	/*while (str[i])
	**{
	**	subcount = ft_stristrfromindex(str, splice, j);
	**	if ((i >= subcount && i <= (int)(subcount + (ft_strlen(splice) - 1))))
	**	{
	**		*result = str[i];
	**		result++;
	**	}
	**	else
	**		j = i + 1;
	**	i++;
	**}
	*/
	return (result);
}
