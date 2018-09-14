/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 23:13:03 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/23 23:16:55 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (0);
	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *parms;
	int			i;

	i = 0;
	if (!(parms = malloc(sizeof(t_stock_par) * (ac))))
		return (NULL);
	while (i < ac)
	{
		parms[i].size_param = ft_strlen(av[i]);
		parms[i].str = av[i];
		parms[i].copy = ft_strdup(av[i]);
		parms[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	parms[i].str = 0;
	return (parms);
}
