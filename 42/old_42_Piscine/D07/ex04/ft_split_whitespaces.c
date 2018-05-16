/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 10:13:28 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/27 10:52:40 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		space(char c)
{
	return (c == ' ' || c == '\n' || c == '\0');
}

int		nb_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	if (space(str[i]) == 0)
		words++;
	while (str[i])
	{
		if (space(str[i]) && space(str[i + 1]) == 0)
			words++;
		i++;
	}
	return (words);
}

char	*create_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (space(str[i]) == 0)
		i++;
	word = malloc(sizeof(*word) * i + 1);
	i = 0;
	while (space(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**carac;

	j = nb_words(str);
	carac = malloc(sizeof(*carac) * j + 1);
	carac[j] = NULL;
	i = 0;
	j = 0;
	if (space(str[0]) == 0)
	{
		carac[j++] = create_word(str);
		i++;
	}
	while (j < nb_words(str))
	{
		while (str[i])
		{
			if (space(str[i - 1]) && space(str[i]) == 0)
				carac[j++] = create_word(&str[i]);
			i++;
		}
	}
	return (carac);
}
