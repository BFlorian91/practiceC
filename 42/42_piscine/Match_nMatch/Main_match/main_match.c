/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:08:45 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/13 11:18:26 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	match(char *s1, char *s2);
void ft_putchar(char c);

int	main(int argc, char **argv)
{
	/*
	printf("%d\n", match("*456", "*456"));
	printf("%d\n", match("T456", "456*"));
	printf("%d\n", match("T456", "*456"));
	printf("%d\n", match("4holaquetal56", "4*56"));
	printf("%d\n", match("45*6", "45T6"));
	printf("%d\n", match("-+456", "*456"));
	printf("%d\n", match("45+-6", "45*6"));
	printf("%d\n", match("45*6", "45*6"));
	printf("%d\n", match(" ", " "));
	printf("%d\n", match("456", "456**"));
	*/
	if (argc > 1)
		ft_putchar(match(argv[1], argv[2]) + 48);
}
