/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 00:21:56 by                   #+#    #+#             */
/*   Updated: 2017/08/30 03:30:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct Player
{
	signed char		username[256];
	int		hp;
	int		mana;
} Player;

int		main()
{
	Player p1 = {"Opla", 100, 100};

	printf("Player name : %s\n", p1.username);
	printf("HP : %d\nMana : %d\n", p1.hp, p1.mana);

	return (0);
}
