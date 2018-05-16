/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 16:21:43 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/26 13:35:10 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*str;
	int		i;

	if (min >= max)
	{
		str = NULL;
		return (NULL);
	}
	str = ((int*)malloc(sizeof(*str) * (max - min)));
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
