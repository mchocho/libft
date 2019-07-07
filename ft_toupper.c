/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:47:11 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 12:47:12 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter. The argument must be representable as an unsigned char
** or the value of EOF.
**
** Although the toupper() function uses the current locale, the toupper_l()
** function may be passed a locale directly.
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
