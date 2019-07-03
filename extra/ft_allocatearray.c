/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocatearray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:58:22 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/02 17:57:56 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	allocatearray(void **arr, int size, void value)
{
	int i;

	i = -1;
	if (!(*arr = (void*)malloc(sizeof(void) *size)))
		return (NULL);

	while(i++ < size)
		*(arr + i) = value;
}
