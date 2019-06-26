/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:16:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/26 18:39:19 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The isprint() function tests for any printing character, including space (` ').
 * The value of the argument must be representable as an unsigned char or the value of EOF.
 */

int ft_isprint(int c) {
	return (c == ' ' || (c >= 33 && c <= 126));
}
