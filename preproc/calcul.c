/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:10:25 by                   #+#    #+#             */
/*   Updated: 2017/08/22 13:23:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define LONGUEUR 15
#define LARGEUR 38
#define AIRE (LONGUEUR * LARGEUR)

/*
 *	Constantes predefinies du langage C :
 *
 *		__FILE__ (affiche le nom du fichier)
 *		__LINE__ (Ligne du fichier)
 *		__DATE__ (date de la compilation)
 *		__TIME__ (heure de la compilation)
 *
 */

int		main(void)
{
	printf("\nAire: %d\n", AIRE);
	printf("\nNombre de Lignes: %d\n\nName: %s\n\nDate: %s\n\nTime: %s\n\n", 
	__LINE__, __FILE__, __DATE__, __TIME__ );
	return(0);
}

