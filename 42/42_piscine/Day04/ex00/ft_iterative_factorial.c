/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:16:59 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/14 14:08:12 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int value;

	value = nb;
	if (nb > 12)
		return (0);
	while (nb > 1)
	{
		value = value * (nb - 1);
		nb--;
	}
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (value);
}
