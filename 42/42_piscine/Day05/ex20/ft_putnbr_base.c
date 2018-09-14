/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:08:19 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/14 18:37:30 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int l_base;

	l_base = 0;
	while (base[l_base])
		l_base++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	else if (nbr > 10)
	{
		ft_putnbr_base(nbr / l_base, base);
		ft_putchar(nbr % l_base);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr % l_base);
}
