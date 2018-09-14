/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 09:40:35 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/05 19:01:28 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(long int nb);

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("**Choose an argument**\n");
		return 1;
	}

	if (argc >= 1)
	{	
		char lol = *argv[1];
		

		if (atoi(argv[1]) == 3 || atoi(argv[1]) == 6)
		{
			int n = atoi(argv[2]);
		
			if ((atoi(argv[1]) == 3))
				ft_is_negative(n);
			if (atoi(argv[1]) == 6) 
				ft_putnbr(n);
		}
		else
		{
		switch (lol)
		{
			case '0' :
				ft_print_alphabet();
				break;
			case '1' :
				ft_print_reverse_alphabet();
				break;
			case '2' :
				ft_print_numbers();
				break;
			case '4' :
				ft_print_comb();
				break;
			case '5' :
				ft_print_comb2();
				break;
			default :
				printf("No exercise after this...");
		}
	}
	}
}
