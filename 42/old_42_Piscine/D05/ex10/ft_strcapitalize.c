/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:20:10 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/24 12:05:06 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == ';' || str[i] == '+' || str[i] == '?'
			|| str[i] == ',' || str[i] == '-' || str[i] == '.')
			word = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && word == 1)
		{
			word = 0;
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && word == 0)
			str[i] += 32;
		else
			word = 0;
		i++;
	}
	return (str);
}
