/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:40:01 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/08 14:48:34 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int i;
	int size_of_array;

	i = 0;
	size_of_array = ft_strlen(str) - 1;
	if (str[0] == '\0')
		return (1);
	while (!(str[i] >= 0 && str[i] <= 32))
	{
		if (i == size_of_array)
			return (1);
		i++;
	}
	return (0);
}
