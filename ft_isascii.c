/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:58:16 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 12:59:20 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isascii() function tests for an ASCII character, which is any
** character between 0 and octal 0177 inclusive.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
