/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:16:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/05/26 14:48:25 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c) {
	return (c == ' ' || (c >= 33 && c <= 126));
}