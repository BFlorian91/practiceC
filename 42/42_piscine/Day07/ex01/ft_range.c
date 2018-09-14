/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:24:14 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/22 17:23:57 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
