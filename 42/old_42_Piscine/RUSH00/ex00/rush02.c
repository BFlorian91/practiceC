/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:58:55 by gtoumani          #+#    #+#             */
/*   Updated: 2017/07/09 20:09:47 by gtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	full_line(int x, int y, int j)
{
	int i;

	i = 0;
	if (j == 1)
		ft_putchar('A');
	else
		ft_putchar('C');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	i = 0;
	if (j == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
		ft_putchar('C');
}

void	space(int x, int y)
{
	int k;
	int e;

	k = 0;
	e = 0;
	while (y > 1 && e < y - 2)
	{
		ft_putchar('B');
		while (x > 1 && k < x - 2)
		{
			ft_putchar(' ');
			k++;
		}
		k = 0;
		ft_putchar('B');
		ft_putchar('\n');
		e++;
	}
}

void	test(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		ft_putchar('B');
	}
	else
	{
		ft_putchar('A');
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int j;
	int k;

	if (x >= 2 && y >= 2)
	{
		j = 1;
		full_line(x, y, j);
		space(x, y);
		j++;
		full_line(x, y, j);
	}
	else if (x == 1 && y == 2)
		test(x, y);
	else if (x == 2 && y == 1)
		test(x, y);
}
