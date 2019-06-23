/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:14:39 by mchocho           #+#    #+#             */
/*   Updated: 2019/06/23 14:19:07 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (!*s || !f)
		return;

	ptr = s;
	while(*ptr) {
		f((char *)&(*ptr));
		ptr++;
	}
}

void sayhi(char* fubu) {
	printf("Hi!, result of fubu: %s\n", fubu);
}



int main() {
	printf(" Testing ft_striter.c\n--------------------------\n");

	char *foo = "Hello bitch!";
	
	printf("Result before method: %s\n", foo);

	ft_striter(foo, sayhi);

	printf("Result after ft_striter: %s\n", foo);

	return 0;
	
}
