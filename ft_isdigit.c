/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:00:23 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/07 13:01:03 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isdigit() function tests for a decimal digit character. Regardless of
** locale, this includes the following characters only:
**
**      ``0''         ``1''         ``2''         ``3''         ``4''
**       ``5''         ``6''         ``7''         ``8''         ``9''
*/

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
