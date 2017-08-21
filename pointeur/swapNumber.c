/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapNumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:22:28 by                   #+#    #+#             */
/*   Updated: 2017/08/21 21:41:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int		main(void)
{
	int		a = 17;
	int		b = 2;
	printf("Before: A = %d Before: B = %d\n", a, b); //affichage av fonction
	ft_ultimate_div_mod(&a, &b); //Lancement de la fonction
	printf("After A = %d After: B = %d\n", a, b); //apres passage de la fonction
	return (0);
}
