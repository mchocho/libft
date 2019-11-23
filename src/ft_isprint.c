/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:02:58 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 13:04:56 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned
** char or the value of EOF.
*/

int		ft_isprint(int c)
{
	return (c == ' ' || (c >= 33 && c <= 126));
}
