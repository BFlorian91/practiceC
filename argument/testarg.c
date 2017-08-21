/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testarg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 13:44:36 by florian           #+#    #+#             */
/*   Updated: 2017/08/17 18:49:03 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i++ < argc - 1)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar(' ');
	}
	ft_putchar('\n');
		return (0);	
}
