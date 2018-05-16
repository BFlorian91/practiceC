/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_ValueMax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:54:30 by                   #+#    #+#             */
/*   Updated: 2017/09/05 02:27:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
	int		i;
	
	i = 0;
	//for (i = 0; i < tailleTableau; i++)
	while (i < tailleTableau)
	{
		if (tableau[i] > valeurMax)
			tableau[i] = 0;
		i++;
	}
}

int		main()
{
	int		tab[] = {10, 55, 30, 45, 55};
	int		maxVal = 30;
	int		size_tab = 5;
	int		i = 0;

	while (i < size_tab)
	{
		printf("%d ", tab[i]);
		i++;
	}

	i = 0;
	printf("\n");
	while (i < size_tab)
	{
		maximumTableau(tab, size_tab, maxVal);
		printf("%d ", tab[i]);
		i++;
	}
}
