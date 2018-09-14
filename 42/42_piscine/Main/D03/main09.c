/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:01:13 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/06 10:17:55 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_sort_integer_table(int *tab, int size);

int	main()
{
	int size = 5;
	int i = 0;
	int tab[6] = {210, 32 , 2, 455 , 0};

	printf("\n\n**Before Sorting**\n_________________\n");

	while (i < 5)
	{
		i < 4 ? printf("%d, ", tab[i]) : printf("%d.\n", tab[i]);
		i++;
	}

	i = 0;

	ft_sort_integer_table(tab, size);

	printf("\n\n**After Sorting**\n_________________\n");

	while (i < 5)
	{
		i < 4 ? printf("%d, ", tab[i]) : printf("%d.\n", tab[i]) ;
		i++;
	}
	return (0);
}
