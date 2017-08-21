/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forceDisplayNumber.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:02:01 by                   #+#    #+#             */
/*   Updated: 2017/08/21 21:06:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Force l'affichage d'un nombre peut importe ce que l'utilisateur souhaite
 * entrer
 * */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42; // j'attribu 42	a nbr
}

int		main() 
{
	int		nbr; 
	nbr = 100;  // j'attribu un nombre random a nbr pour voir si il 
	//sera bien change par la fonction ft_ft
	ft_ft(&nbr); // Je lance ma Fonction ft_ft
	printf("%d", nbr); 
}
