/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concatbuffers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:15:02 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/17 15:16:19 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_concatbuffers(char *str, char *buffer)
{
	char *temp;

	temp = ft_strjoin(str, buffer);
	ft_strclean(str);
	return (temp);
}
