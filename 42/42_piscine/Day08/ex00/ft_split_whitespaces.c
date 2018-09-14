/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 21:40:11 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/21 21:42:47 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		wordcount(char *str)
{
	int nbw;

	nbw = 0;
	while (*str)
	{
		while (*str && ft_is_space(*str))
			str++;
		if (!*str)
			break ;
		while (*str && !ft_is_space(*str))
			str++;
		nbw++;
	}
	return (nbw);
}

int		wordsize(char *str)
{
	int i;

	i = 0;
	while (str[i] && !ft_is_space(str[i]))
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		nbw;
	char	**tab;

	i = 0;
	nbw = wordcount(str);
	tab = malloc(sizeof(char *) * (nbw + 1));
	while (i < nbw)
	{
		while (*str && ft_is_space(*str))
			str++;
		if (!*str)
			break ;
		tab[i] = malloc(sizeof(char) * (wordsize(str) + 1));
		j = 0;
		while (*str && !ft_is_space(*str))
		{
			tab[i][j++] = *str;
			str++;
		}
		tab[i++][j] = 0;
	}
	tab[i] = 0;
	return (tab);
}
