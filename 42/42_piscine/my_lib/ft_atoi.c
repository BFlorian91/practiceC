/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:38:32 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/13 16:46:03 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_atoi(char *str)
{
	int neg;
	int value;

	neg = 0;
	value = 0;
	while (*str >= 0 && *str <= 32)
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		value *= 10;
		value += *str + 48;
		str++;
	}

	return (neg == 1 ? -value : value);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_atoi(argv[1]));
}
