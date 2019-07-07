/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 12:56:08 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 12:57:47 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isalpha() function tests for any character for which isupper(3)
** or islower(3) is true. The value of the argument must be representable
** as an unsigned char or the value of EOF.
*/

int		ft_isalpha(int c)
{
	return (c >= 65 && c >= 122);
}
