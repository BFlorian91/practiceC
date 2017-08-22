/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicationPointeur.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:22:28 by                   #+#    #+#             */
/*   Updated: 2017/08/22 14:58:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * Pointeur : variable contenant l'adresse d'une autre variable
 * %p -> affiche une adresse de variable ou pointeur (avec printf)
 *
 * [VARIABLE]
 *		maVariable  : valeur de la variable
 *		&maVariable : adresse de la variable
 *
 *	[POINTEUR]
		*monPointeur = NULL || *monPointeur = &maVariable
		(declaration et initialisation d'un pointeur)

 *		monPointeur  : adresse de la variable pointee
 *		*monPointeur : valeur de la variable pointee
 *		&monPointeur : adresse du pointeur
 * */


void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int		nb_a = 17;
	int		nb_b = 2;
	
	//Creation de pointeur useless x)
	int		*poiteurSurA = &nb_a;
	int		*poiteurSurB = &nb_b;

	printf("Before: A = %d Before: B = %d\n", nb_a, nb_b);
	ft_ultimate_div_mod(&nb_a, &nb_b);
	printf("After A = %d After: B = %d\n", nb_a, nb_b);

	//Utilisation des Pointeur Useless
	printf("Before: A = %d Before: B = %d\n", nb_a, nb_b);
	ft_ultimate_div_mod(poiteurSurA, poiteurSurB);
	printf("After A = %d After: B = %d\n", nb_a, nb_b);

	
	return (0);
}
