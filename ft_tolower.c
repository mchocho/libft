/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:41:32 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/03 18:27:03 by mchocho          ###   ########.fr       */
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
	else
		return (c);
}
