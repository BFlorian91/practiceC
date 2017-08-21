/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringArray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:16:56 by                   #+#    #+#             */
/*   Updated: 2017/08/21 21:19:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	char test[] = "Hello";
	ft_putstr(test);
	return (0);
}
