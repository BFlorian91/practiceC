/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:27:08 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/02 16:35:07 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_comb2(int a, int b)
{
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	ft_putchar(' ');
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	if (a != 99 || b != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (b < 99)
	{
		while (a <= 99)
		{
			ft_putchar_comb2(a, b);
			a++;
		}
		b++;
		a = b + 1;
	}
}
