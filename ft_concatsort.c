/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concatsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 03:59:34 by mchocho           #+#    #+#             */
/*   Updated: 2019/07/06 04:23:51 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_qsort(int arr[], size_t j, int sarr[], size_t i, size_t len1, size_t len2)
{
	while (i < (len1 + len2))
	{
		sarr[i] = arr[j];
		j++;
		i++;
	}
}

void	ft_concatsort(int lst1[], size_t len1, int lst2[], size_t len2, int sorted[])
{
	size_t i;
	size_t j;
	size_t k;

	i = 0 = j = k;
	while (i < (len1 + len2))
	{
		if (j < len1 && k < len2)
		{
			if (lst1[j] < lst2[k])
			{
				sorted[i] = lst1[j];
				j++;
			}
			else
			{
				sorted[i] = lst2[k];
				k++;
			}
			i++;
		}
		else if (j == len1)
			ft_qsort(list2, k, sorted, i, len1, len2);
		else
			ft_qsort(list1, j, sorted, i, len1, len2);
	}
}

#include <stdio.h>

int main()
{
	printf(" Testing ft_concatsort.c\n------------------------------\n");

	int sorted[10];

	int foo[] = {52, 3, 14, 7, 3};

	int fubu[] = {100, 2, 6, 65, 42};

	ft_concatsort(foo, 5, fubu, 5, sorted);
	
	int i = 10;

	while(i >= 0)
	{
		printf("Index %d --- %d\n", i. sorted[i]);
		i--;
	}

	return 0;
}
