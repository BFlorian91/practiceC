/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 11:34:44 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/22 17:22:11 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (i < size)
		tab[i++] = min++;
	*range = tab;
	return (size);
}
