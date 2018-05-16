/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 21:03:19 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/24 14:16:50 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' &&
			str[0] <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
