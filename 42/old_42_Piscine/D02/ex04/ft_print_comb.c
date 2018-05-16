/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:59:55 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/07 08:36:13 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_comb_putchar(int a, int b, int c)
{
	if (a < b && b < c)
	{
		if (a == 7 && b == 8 && c == 9)
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
		}
		else
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = 0;
		while (b <= 8)
		{
			c = 0;
			while (c <= 9)
			{
				ft_comb_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
