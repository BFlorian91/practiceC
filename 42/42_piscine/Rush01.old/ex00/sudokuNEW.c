/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:37:25 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/11 20:34:57 by flbeaumo         ###   ########.fr       */
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


/********* Checking **************/
bool check_row_column(char **grid, int value, int col, int row)
{
	int i;
	int j;;

	i = 0;
	col_block = 3 * (col / 3);
	row_block = 3 * (row / 3);
	while (i < 10)
	{
		if (grid[i][row] == value)
			return (false);
			
		if (grid[col][i] == value)
				return (false);
	++i;
	}

	 i = 3 * (col / 3);
	 j = 
	while (i <= row_block + 3)
		{
			j = col_block;
			while (j <= col_block + 3)
			{
				if grid[i][row] == value;
					return (false);
				else
					i++;
			}
	
			
	}
		
				
				
			

		}
		
	}
	return (true);	
	
}

/**********************************/

int main (int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 10)
		display_sudoku(argv, 0, 0);
	else
		write(1, "Error", 5);
}
