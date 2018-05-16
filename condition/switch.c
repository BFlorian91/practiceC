/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:27:30 by                   #+#    #+#             */
/*   Updated: 2017/08/30 00:20:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int		menu;

	menu = 0;
	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf ("Votre choix ?\n");
	scanf("%d", &menu);
	switch (menu)
	{
	case 1:
		printf("1. Vous avez choisis le Royal Cheese\n");
		break;
	case 2:
		printf("2. Vous avez choisis le Mc Deluxe\n");
		break;
	case 3:
		printf("3. Vous avez choisis le Mc Bacon\n");
		break;
	case 4:
		printf("4. Vous avez choisis le Big Mac\n");
	default:
		printf("Votre choix est invalidei\n");
		break;
	}
	return (0);
}
