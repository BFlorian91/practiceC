/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 19:35:30 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 19:07:00 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "checking.h"
#include "rush01.h"
#include "solving.h"

int		main(int argc, char **argv)
{
	char	grid[9][9];

	if (!(input_is_valid(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	build_table(argv + 1, grid);
	solve_sudoku(grid, 0, 0);
	print_table(grid);
	return (0);
}
