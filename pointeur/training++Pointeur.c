/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:30:15 by                   #+#    #+#             */
/*   Updated: 2017/08/22 15:44:59 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_add(int *nb1, int *nb2)
{
	*nb1 = 15;
	*nb2 = 2017;
}
int		main(void)
{
	int		a;
	int		b;
	int		result;

	a = 0;
	b = 0;
	result = 0;
	
	//Avant fonction;
	result = a + b;
	printf("%d\n", result);

	//Apres fonction;
	ft_add(&a, &b);
	result = a + b;
	printf("%d\n", result);

	return(0);
}
