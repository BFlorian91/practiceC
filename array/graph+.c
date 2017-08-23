/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph+.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:39:52 by                   #+#    #+#             */
/*   Updated: 2017/08/23 16:52:49 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define draw printf("A");

int		main()
{
	int		valueX = 1;
	int		valueY = 4;
	int		x;
	int		y;

	x = 0;
	y = 0;

/* ---- fix if valueX > 0, valueY is egal valueY + 1 from valueX ---- */
	if (valueX > 0)
		valueY -= 1;

/* ---- fix if valueX = 0, valueY display a column ---- */
	while (valueX == 0)
	{
		draw;
		printf("\n");
		y++;
		if (y == valueY)
			return(0);
	}

/* ---- main programme ---- */
	while (x != valueX)
	{
		draw;
		x++;
			if (x == valueX)
			{
				if (y == valueY)
					return(0);
				printf("\n");
				x = 0;
				y++;
			}
	}

/* ---- fix if all values = 0, close the software ---- */
	if (valueX == 0 && valueY == 0)
		return (0);
	return(0);
}

