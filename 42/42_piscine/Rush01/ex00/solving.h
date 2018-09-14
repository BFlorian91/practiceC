/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:48:57 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 20:09:41 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVING_H
# define SOLVING_H

int		is_valid(char number, char grid[9][9], int row, int column);
int		solve_sudoku(char grid[9][9], int i, int j);

#endif
