/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:59:06 by ravernhe          #+#    #+#             */
/*   Updated: 2018/08/19 21:10:44 by ravernhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_comp(char *str, int x, int y);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_disply_00(int *rushxx, int x, int y);
void	ft_disply_01(int *rushxx, int x, int y);
void	ft_disply_02(int *rushxx, int x, int y);
void	ft_disply_03(int *rushxx, int x, int y);
void	ft_disply_04(int *rushxx, int x, int y);
char	*rush00(int	x, int y);
char	*rush01(int	x, int y);
char	*rush02(int	x, int y);
char	*rush03(int	x, int y);
char	*rush04(int	x, int y);

#endif
