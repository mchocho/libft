/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splicesubstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:30:07 by mchocho           #+#    #+#             */
/*   Updated: 2019/08/13 18:40:45 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int ft_stristrvalid(char *str, char *splice, int i, int j)
{
	return (i >= ft_stristrfromindex(str, splice, j)
			&& i <= (ft_stristrfromindex(str, splice, j) + ft_strlen(splice)));
}*/


char	*ft_splicesubstr(char *str, char *splice)
{
	char	*result;
	int		subcount;
	int		i;
	int		j;

	subcount = 0;
	i = 0;

	while ((i = ft_stristrfromindex(str, splice, (i + 1))))
		subcount++;
	if (subcount == 0)
		return (ft_strnewstr(str));
	else if (ft_strlen(str) == 1)
		return ("\0");
	result = ft_strnew(subcount * ft_strlen(splice));
	i = 0;
	while (str[i])
	{
		subcount = ft_stristrfromindex(str, splice, j);
		if (!(i >= subcount && i <= (int)(subcount + (ft_strlen(splice) - 1))))
		{	
			*result = str[i];
			result++;
		}
		else
			j = i + 1;
		i++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_splicesubstr.c\n------------------------------\n");

	char *foo = "Hello world! Where are the robots we need robots today!!";

	char *splice = "robots";

	printf("Splicing the string \"%s\" from string: \"%s\"\n", splice, foo);

	printf("Result returned: %s\n", ft_splicesubstr(foo, splice));

	return 0;
}
