/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:20:37 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/23 21:37:42 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 32 && str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}
