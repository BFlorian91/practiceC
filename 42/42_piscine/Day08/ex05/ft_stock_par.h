/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:58:13 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/23 23:10:28 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <unistd.h>

struct s_stock_par			*ft_param_to_tab(int ac, char **av);
char						**ft_split_whitespaces(char *str);
void						ft_show_tab(struct s_stock_par *par);

typedef struct				s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}							t_stock_par;

#endif
