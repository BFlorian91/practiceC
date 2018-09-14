/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:25:47 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/06 11:33:25 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putstr(char *str);
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);

	return (0);
}
