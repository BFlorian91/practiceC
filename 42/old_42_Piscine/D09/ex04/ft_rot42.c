/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:15:34 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/14 14:10:59 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 97;
			str[i] = (str[i] + 42) % 26;
			str[i] += 97;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 65;
			str[i] = (str[i] + 42) % 26;
			str[i] += 65;
		}
		i++;
	}
	return (str);
}
