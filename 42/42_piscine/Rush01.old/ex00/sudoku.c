/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:37:25 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/11 16:54:48 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sudoku.h"
#include <stdio.h>
#include <unistd.h>


/************ Display ***********/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_sudoku(char **grid, int i, int j)
{
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grid[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
/*********************************/

bool check_line_column(char **grid, int value, int i, int j)
{
	while (j < 9)
	{
		if (grid[i][j] == value)
			return (false);
		j++;	
	}
	while (i < 9)
	{
		if(grid[i][j] == value)
			return (false);
		i++;
	}
	return (true);
	
}

bool check_block(char **grid, int value, int i, int j)
{
	
}

int main (int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 10)
		display_sudoku(argv);
	else
		write(1, "Error", 5);
}
