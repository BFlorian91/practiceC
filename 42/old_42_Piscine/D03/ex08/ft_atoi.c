/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:45:15 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/16 14:24:47 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int val;
	int neg;
	int c;

	val = 0;
	neg = 0;
	c = 0;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\n' ||
			str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-')
		neg = 1;
	if (str[c] == '+' || str[c] == '-')
		c++;
	while ((str[c] >= '0' && str[c] <= '9') && (str[c] != '\0'))
	{
		val = val * 10;
		val += str[c] - '0';
		c++;
	}
	if (neg == 1)
		return (-val);
	else
		return (val);
}
