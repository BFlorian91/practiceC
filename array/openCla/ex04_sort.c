/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 02:33:17 by                   #+#    #+#             */
/*   Updated: 2017/09/05 03:23:13 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ordonnerTableau(int tableau[], int tailleTableau)
{
	int		i;
	int		j;
	int		sort;

	for (i = 0; i < tailleTableau; i++)
	{
		sort = tableau[i];
		for (j = i; j > 0 && tableau[j-1] > sort; j--)
			tableau[j] = tableau[j-1];
		tableau[j] = sort;
	}
}

int		main()
{
	int		i;
	int		tab[5] = {9, 23, 1, 5, 2};
	int		size_tab = 5;

	printf("Before sort: ");
	for (i = 0; i < size_tab; i++)
		printf("%d. ", tab[i]);

		ordonnerTableau(tab, size_tab);

	printf("\nAfter sort: ");
	for (i = 0; i < size_tab; i++)
		printf("%d. ", tab[i]);
	printf("\n");

	return (0);
}
