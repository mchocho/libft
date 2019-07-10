/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:08:41 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/10 18:19:54 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (/*str[i] &&*/ i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_memset.c\n----------------------------\n");


	char *foo = "Hello world. It's the rise of the robots wake up and plug in.";

	void *result = ft_memset((void *)foo, 'c', 16);

	printf("Result returned: %s\n", (char *)result);

	return (0);
}
