/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurOnPointeur.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:10:27 by                   #+#    #+#             */
/*   Updated: 2017/08/21 21:12:44 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
*********nbr = 42; //attribution a un pointeur aui pointe X fois sur nbr
}

int		main()
{
	// initialisqtion de tout les pointeurs et nbr
	 int	nbr;
	 int*nbr0;
	 int**nbr1;
	 int***nbr2;
	 int****nbr3;
	 int*****nbr4;
	 int******nbr5;
	 int*******nbr6;
	 int********nbr7;
	 int*********nbr8;
	
	// // assignation des pointeur sur les adresses
	 nbr = 442 ;
	 nbr0 = &nbr;
	 nbr1 = &nbr0;
	 nbr2 = &nbr1;
	 nbr3 = &nbr2;
	 nbr4 = &nbr3;
	 nbr5 = &nbr4;
	 nbr6 = &nbr5;
	 nbr7 = &nbr6;
	 nbr8 = &nbr7;
	
	 ft_ultimate_ft(&nbr7); // lancement de la fonction ft_ultimate_ft(l'adresse du pointeur qu'on veut afficher)
	 printf("%d", nbr); //affiche la valeur de nbr pour verifier que la valeur attribue au nbr dans la fonction  lui est bien impose
	 printf("%d", ****nbr3); // test pour voir si le pointeur nbr3 recoit bien egalement la valeur.
	 return (0);
	 }
