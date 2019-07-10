/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:31:23 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/10 16:31:47 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The tolower() function converts an upper-case letter to the corresponding
** lower-case letter. The argument must be representable as an unsigned char
** or the value of EOF.
**
** Although the tolower() function uses the current locale, the tolower_l()
** function may be passed a locale directly.
*/

int		ft_lower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
