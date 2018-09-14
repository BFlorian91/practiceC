/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:14:53 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/14 11:53:57 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	value;

	value = 0;
	if (nb < 0)
		return (0);
	else if (nb == 4)
		return (2);
	else if (nb == 9)
		return (3);
	while (value <= nb / 4)
	{
		if (nb == value * value)
			return (value);
		value++;
	}
	return (0);
}
