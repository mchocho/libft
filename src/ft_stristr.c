/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stristr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:28:29 by mchocho           #+#    #+#             */
/*   Updated: 2019/08/13 13:28:31 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_stristr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
			while (s1[k] == s2[j])
			{
				if (s2[(j + 1)] == '\0')
					return (i);
				j++;
				k++;
			}
		}
		i++;
	}
	return (-1);
}