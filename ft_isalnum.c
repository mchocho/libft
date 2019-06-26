/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:01:20 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:35:28 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.
 * The value of the argument must be representable as an unsigned char or the value of EOF.
 */


int ft_isalnum(int c)
{
	return (c >= 48 && c <= 122);
}
