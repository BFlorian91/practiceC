/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:44:18 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/23 21:34:59 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
