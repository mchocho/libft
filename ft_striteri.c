/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:03:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 14:16:30 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char		*ptr;
	unsigned int	i;

	if (!*s || !f)
		return;
	ptr = s;
	i = 0;
	while (*ptr)
	{
		f(i, (char *)&(*ptr));
		ptr++;
		i++;
	}
}