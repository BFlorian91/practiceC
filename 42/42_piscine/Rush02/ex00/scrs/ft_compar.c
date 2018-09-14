/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:58:53 by ravernhe          #+#    #+#             */
/*   Updated: 2018/08/19 20:54:55 by ravernhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_head.h"

int	ft_many(int *rushxx)
{
	int	i;
	int x;

	i = 0;
	x = 0;
	while (i < 6)
	{
		if (rushxx[i] == 1)
			x++;
		i++;
	}
	return (x);
}

int	*ft_comp(char *str, int x, int y)
{
	int	*rushxx;

	if (!(rushxx = (int *)malloc(sizeof(*rushxx) * 7)))
		return (0);
	rushxx[0] = 0;
	rushxx[1] = 0;
	rushxx[2] = 0;
	rushxx[3] = 0;
	rushxx[4] = 0;
	rushxx[5] = 0;
	if (!(ft_strcmp(str, rush00(x, y))))
		rushxx[0] = 1;
	if (!(ft_strcmp(str, rush01(x, y))))
		rushxx[1] = 1;
	if (!(ft_strcmp(str, rush02(x, y))))
		rushxx[2] = 1;
	if (!(ft_strcmp(str, rush03(x, y))))
		rushxx[3] = 1;
	if (!(ft_strcmp(str, rush04(x, y))))
		rushxx[4] = 1;
	rushxx[5] = ft_many(rushxx);
	return (rushxx);
}
