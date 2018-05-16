/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 07:09:49 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/20 16:50:56 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	if (nb >= 1)
	{
		while (nb > 1)
		{
			i = i * (nb - 1);
			nb--;
		}
		return (i);
	}
	else
		return (1);
}
