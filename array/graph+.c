/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph+.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:39:52 by                   #+#    #+#             */
/*   Updated: 2017/08/23 00:29:03 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Create a SQuarre with modular values

/*int		ft_error(int *valueZ)
{
	if (*valueZ == 0)
	{
		printf("Error, this shit is a SQuarre for you??\n");
		return (0);
	}
	return (0);
}
*/
int		main()
{
	int		valueX = 50;
	int		valueY = 14;
	
	
	int		x;
	int		y;

	x = 0;
	y = 0;
	
	while (x != valueX)
	{
		printf("+");
		x++;
			if (x == valueX)
			{
				printf("\n");
				x = 0;
				y++;
			}
			if (y == valueY)
				return(0);
	}
	return(0);
}

