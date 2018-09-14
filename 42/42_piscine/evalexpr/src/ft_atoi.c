/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 11:13:48 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/18 11:31:28 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int value;
	int neg;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] >= 9 && str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		value *= 10;
		value += str[i] - 48;
		i++;
	}
	return (value * neg);
}
