/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00_somme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 23:45:38 by                   #+#    #+#             */
/*   Updated: 2017/09/04 01:46:27 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		sommeTableau(int tableau[], int tailleTableau)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (i < tailleTableau)
	{
		result += tableau[i];
		i++;
	}
	return (result);
}

int		main()
{
	int		size_tab;
	int		tab[] = {7, 3, 5};

	size_tab = 3;
	printf("The result is: %d\n", sommeTableau(tab, size_tab));
	return (0);
}
