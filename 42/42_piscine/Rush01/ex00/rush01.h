/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:48:47 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 20:09:04 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

void	print_table(char grid[9][9]);
void	build_table (char **argv, char grid[9][9]);
int		solve_sudoku(char grid[9][9], int i, int j);
int		is_valid(char number, char grid[9][9], int row, int column);

#endif
