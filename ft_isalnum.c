/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:54:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/11 18:47:01 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isalnum() function tests for any character for which isalpha(3)
** or isdigit(3) is true.  The value of the argument must be
** representable as an unsigned char or the value of EOF.
*/

int		ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57)
			|| (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122));
}
