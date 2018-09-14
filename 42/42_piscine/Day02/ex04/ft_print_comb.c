/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:52:33 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/03 09:55:42 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int c)
{
	if (a == 7 && b == 8 && c == 9)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
	}
	else if (c > b && b > a)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 10 && b <= 10 && c <= 10)
	{
		ft_print(a, b, c);
		if (c <= 9)
		{
			c++;
			if (c == 10)
			{
				c = 0;
				b++;
				if (b == 10)
				{
					b = 0;
					a++;
				}
			}
		}
	}
}
