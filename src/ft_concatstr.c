/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concatstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:59:11 by mchocho           #+#    #+#             */
/*   Updated: 2020/01/19 13:31:39 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#define MAX_SIZE 2147483647 / (1024 * 4)

void	ft_concatstr(char **dst, const char *src)
{
	char temp[MAX_SIZE];

	ft_bzero(temp, 1);
	ft_strcpy(temp, *dst);
	ft_strcat(temp, src);
	ft_strcleandel(dst);
	*dst = ft_strdup(temp);
	return ;
}
