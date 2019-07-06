/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strirchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 00:40:56 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/06 17:29:40 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the last occurence of c in string s. strirchr() performs the search
** counting backwards from index i. If index i doesn't exit NULL is returned.
**/

char*   ft_strirchr(const char *s, int c, size_t i)
{

        while (s[i])
        {
                if (s[i] == c)
                        return ((char *)(s + i));
                i--;
        }
        if (s[0] == c)
                return ((char *)(s + 0));
        return (NULL);
}
