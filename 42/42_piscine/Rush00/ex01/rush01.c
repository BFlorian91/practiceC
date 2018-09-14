/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 22:07:25 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/05 22:50:36 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	*symb;
	int		a;
	int		b;

	symb = "/*\\ ";
	b = 1;
	while (b <= y && x > 0 && y > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || ((a == x && b == y) && (x > 1 && y > 1)))
				ft_putchar(symb[0]);
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar(symb[2]);
			else if (((a == 1 || a == x) && (b > 1 && b < y))
				|| ((b == 1 || b == y) && (a > 1 && a < x)))
				ft_putchar(symb[1]);
			else
				ft_putchar(symb[3]);
			++a;
		}
		ft_putchar('\n');
		++b;
	}
}
