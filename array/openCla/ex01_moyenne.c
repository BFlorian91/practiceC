/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_moyenne.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 01:47:10 by                   #+#    #+#             */
/*   Updated: 2017/09/04 03:16:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double		moyenneTableau(int tableau[], int tailleTableau)
{
	int		result;
	int		i;

	result = 0;
//	i = 0;

/*	while (i < tailleTableau)
	{
		result += tableau[i];
		i++;
	}
*/
	for(i = 0; i < tailleTableau; i++)
		result += tableau[i];
	return (double)result / tailleTableau;
}

int		main()
{
	int		tab[] = {18, 17, 19, 20, 15};
	int		size_tab;

	size_tab = 5;
	printf("La moyenne est de: %f\n", moyenneTableau(tab, size_tab));
	return (0);
}
