/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:03:59 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/23 21:34:41 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= '1' && str[0] <= '9'))
			return (0);
		str++;
	}
	return (1);
}
