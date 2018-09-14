/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:07:59 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/05 23:31:34 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	*symb;
	int		a;
	int		b;

	symb = "ACB  ";
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x && x > 0 && y > 0)
		{
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				ft_putchar(symb[0]);
			else if ((a == x && b == y) || (a == x && b == 1))
				ft_putchar(symb[1]);
			else if (((a == 1 || a == x) && (b > 1 && b < y))
			|| ((b == 1 || b == y) && (a > 1 && a < x)))
				ft_putchar(symb[2]);
			else
				ft_putchar(symb[3]);
			++a;
		}
		ft_putchar('\n');
		++b;
	}
}
