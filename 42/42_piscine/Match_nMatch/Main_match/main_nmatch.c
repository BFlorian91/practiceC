/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_nmatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:30:15 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/13 11:18:47 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2);

int	main(int argc, char **argv)
{
	/*
	printf("%d\n", nmatch("*456", "*456"));
	printf("%d\n", nmatch("T456", "45**"));
	printf("%d\n", nmatch("T456", "****"));
	printf("%d\n", nmatch("4holaquetal56", "4**56"));
	printf("%d\n", nmatch("45*6", "45T6*"));
	printf("%d\n", nmatch("-+456", "*45**6"));
	printf("%d\n", nmatch("45+-6", "45*6"));
	printf("%d\n", nmatch("45*6", "45*6"));
	printf("%d\n", nmatch(" ", " *"));
	printf("%d\n", nmatch("456", "456**"));
	*/
	if (argc > 0)
		printf("%d", nmatch(argv[1], argv[2]));
	return (0);
}
