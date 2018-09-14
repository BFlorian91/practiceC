/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:29:53 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 21:44:02 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char number, char grid[9][9], int row, int column)
{
	int i;
	int j;
	int boxrow;
	int boxcolumn;

	i = -1;
	while (++i < 9)
		if (grid[i][column] == number)
			return (0);
	i = -1;
	while (++i < 9)
		if (grid[row][i] == number)
			return (0);
	boxrow = (row / 3 + 1) * 3 - 1;
	boxcolumn = (column / 3 + 1) * 3 - 1;
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
			if (grid[boxrow - i][boxcolumn - j] == number)
				return (0);
	}
	return (1);
}

int	solve_sudoku(char grid[9][9], int i, int j)
{
	char n;

	n = '0';
	if (i == 9)
		return (1);
	if (grid[i][j] != '0')
	{
		if (j == 8 && (solve_sudoku(grid, i + 1, 0)))
			return (1);
		else if (solve_sudoku(grid, i, j + 1))
			return (1);
		return (0);
	}
	while (n <= '8')
		if ((n++ || 1) && is_valid(n, grid, i, j))
		{
			grid[i][j] = n;
			if (j == 8 && (solve_sudoku(grid, i + 1, 0)))
				return (1);
			else if (solve_sudoku(grid, i, j + 1))
				return (1);
			grid[i][j] = '0';
		}
	return (0);
}
