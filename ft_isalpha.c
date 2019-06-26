/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:51:39 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:36:19 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The isalpha() function tests for any character for which isupper(3) or islower(3) is true.
 * The value of the argument must be representable as an unsigned char or the value of EOF
 */

int ft_isalpha(int c)
{
	return (c >= 65 && c <= 122);
}
