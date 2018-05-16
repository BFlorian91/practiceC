/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_cpyTab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:58:26 by                   #+#    #+#             */
/*   Updated: 2017/09/04 22:41:11 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
	int		i;

	i = 0;
	for (i = 0; i < tailleTableau; i++)
		tableauCopie[i] = tableauOriginal[i];
}

int		main()
{
	int		tabO[] = {34, 56, 5};
	int		tabC[3];
	int		size_tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size_tab = 3;
	
	printf("Le tableauOriginal = [");
	while (i < size_tab)
	{
		printf("%d", tabO[i]);
		if (!(i == (size_tab - 1)))
			printf(", ");
		i++;
	}
	printf("]\nLe tableauCopie = [");
		while (j < size_tab)
		{
			copie(tabO,tabC, size_tab);
			printf("%d", tabC[j]);
			if (!(j == (size_tab - 1)))
				printf(", ");
			j++;
		}
		printf("]\n");

	return (0);
}
