/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memoFunctionString.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:47:27 by                   #+#    #+#             */
/*   Updated: 2017/08/24 02:09:11 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
 *		[Function String]
 *			strcpy()  : copie une chaine dans une autre
 *			strlen()  : longueur d'une chaine (sans '\0')
 *			strcmp()  : compare deux chaine 
 *			strcat()  : concatener deux chaine
 *			strstr()  : chercher une chaine dans une autre
 *			strchr()  : cherher la premiere occurence du caractere
 *
 *			sprintf() : ecrire dans une chaine
 * */
/*

// strcpy
int		main()
{
	char	name[20] = "Zogzog";

	printf("Ton nom de base : %s\n", name);

	strcpy(name, "Lok'Thar");
	printf("Ton nouveau nom est %s\n", name);
	
	return (0);
}*/

// strlen
/*
int		main()
{
	char	texte[] = "Hello";

	printf("Texte : %s\n", texte);
	printf("Taille du texte : %lu\n", strlen(texte));
	
	return (0);
}
*/

// strcmp
/*
int		main()
{
	char mot1[] = "b";
	char mot2[] = "a";
	int test = strcmp(mot1, mot2);

	if (test == 0)
		printf("les deux sont identiques\n");
	else if (test < 0)
		printf("%s < %s\n", mot1, mot2);
	else
		printf("%s > %s", mot1, mot2);
	return (0);
}*/


