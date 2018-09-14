/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:47:50 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 20:05:31 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	build_table(char **argv, char grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i][j] = '0';
			else
				grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
}

void	print_table(char grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, &grid[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}
