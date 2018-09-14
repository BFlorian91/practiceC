/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 12:52:54 by ravernhe          #+#    #+#             */
/*   Updated: 2018/08/19 20:46:21 by ravernhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_head.h"

void	ft_disply_00(int *rushxx, int x, int y)
{
	ft_putstr("[colle-00] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	if (rushxx[5] > 1)
	{
		ft_putstr(" || ");
		rushxx[5]--;
	}
}

void	ft_disply_01(int *rushxx, int x, int y)
{
	ft_putstr("[colle-01] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	if (rushxx[5] > 1)
	{
		ft_putstr(" || ");
		rushxx[5]--;
	}
}

void	ft_disply_02(int *rushxx, int x, int y)
{
	ft_putstr("[colle-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	if (rushxx[5] > 1)
	{
		ft_putstr(" || ");
		rushxx[5]--;
	}
}

void	ft_disply_03(int *rushxx, int x, int y)
{
	ft_putstr("[colle-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	if (rushxx[5] > 1)
	{
		ft_putstr(" || ");
		rushxx[5]--;
	}
}

void	ft_disply_04(int *rushxx, int x, int y)
{
	ft_putstr("[colle-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	rushxx[5] = 0;
}
