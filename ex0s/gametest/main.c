#include <stdio.h>
#include <stdlib.h>

/*------dsp for Display Stats Player ------*/
#define dsp printf("\nYou have : |- %d hp and %d mana point -|\n", p1.hp, p1.mp)
#define dse1 printf("Enemy 1 : |- %d hp -|\n", b1.hp)
#define dse2 printf("Enemy 2 : |- %d hp -|\n", b2.hp)
#define dse3 printf("Enemy 3 : |- %d hp -|\n", b3.hp)

#define EnemyTaking printf("Enemy take %d damage\n", p1.spell_bolt)


void	menu(void)
{
	int		select;

	select = 0;
	printf("=== Game menu ===\n");
	printf("1 . Playing\n");
	printf("2 . Exit\n");
	scanf("%d", &select);

	switch (select)
	{
		case 1:
			printf("  ==== Welcome ====\n\nChoose your character :\n\n");
			int		character;
			printf("1 . Sylvanas\n2 . Thraal\n3 . Vol'jin\n");
			scanf("%d", &character);
			switch (character)
			{
				case 1:
					printf("You choose Sylvanas !\n");
					break;
				case 2:
					printf("You choose Thraal !\n");
					break;
				case 3:
					printf("You choose Vol'jin !\n");
					break;
				default:
					printf("invalid choice ...\n");
					break;
			}
			break;
		case 2:
			printf("See you later !\n");
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("invalid command...\n");
			break;
	}
}

typedef struct player
{
	int		hp;
	int		mp;
	int		spell_bolt;
	int		spell_heal;
	int		spell_booster;

} Player;

typedef struct bot
{
	int		hp;
	int		attack;
} Bot;

int		main()
{
	menu();

	/*--- initialize character + bot ---*/

	Player p1 = {100, 200, 20, 30, 10};
	Bot b1 = {50, 12};
	Bot b2 = {70, 15};
	Bot b3 = {35, 20};
	/*----------------------------------*/

	int		count_round;

	count_round = 0;

	while (!(p1.hp <= 0 || (b1.hp <= 0 && b2.hp <= 0 && b3.hp <= 0)))
	{
		int		attack_player;
		int		target;

		target = 0;

		if(b1.hp <= 0)
			b1.hp = 0;
		if(b2.hp <= 0)
			b2.hp = 0;
		if(b3.hp <= 0)
			b3.hp = 0;

		/* ------------- GamePlay ------------*/
		p1.mp += 15; //regen mana par tour
		dsp;
		printf("\n ---> Your turn <--- \n");
		printf("You can use : 1. bolt | 2. heal | 3. booster\n");
		scanf("%d", &attack_player);

		if (attack_player == 1)
		{
			printf("Who would you attack ?\n");
			printf("1. Enemy1, 2. Enemy2 or 3. Enemy3 ?\n\n");
			dse1, dse2, dse3; //Display Stats Enemy
			scanf("%d", &target);
		}
		if (p1.mp > 0)
		{
			switch (attack_player)
			{
				case 1:
					switch(target)
					{
						case 1:
							b1.hp -= p1.spell_bolt;
							EnemyTaking;
							p1.mp -= 20;
							if (b1.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							else if (b1.hp <= 0 && b2.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy2 furious attacking you for %d damage\n", b2.attack);
							}
							else if (b1.hp <= 0 && b2.hp <= 0 && b3.hp > 0)
							{
								p1.hp -= b3.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							break;
						case 2:
							b2.hp -= p1.spell_bolt;
							EnemyTaking;
							p1.mp -= 20;
							if (b1.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							else if (b1.hp <= 0 && b2.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy2 furious attacking you for %d damage\n", b2.attack);
							}
							else if (b1.hp <= 0 && b2.hp <= 0 && b3.hp > 0)
							{
								p1.hp -= b3.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							break;
						case 3:
							b3.hp -= p1.spell_bolt;
							EnemyTaking;
							p1.mp -= 20;
							if (b1.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							else if (b1.hp <= 0 && b2.hp > 0)
							{
								p1.hp -= b1.attack;
								printf("Enemy2 furious attacking you for %d damage\n", b2.attack);
							}
							else if (b1.hp <= 0 && b2.hp <= 0 && b3.hp > 0)
							{
								p1.hp -= b3.attack;
								printf("Enemy1 furious attacking you for %d damage\n", b1.attack);
							}
							break;
						default :
							printf("target doesn't exist\n");
							break;
					}
					p1.mp -= 10;
					break;
				case 2:
					p1.hp += p1.spell_heal;
					p1.mp -= 30;
					printf("Healing you for %d hp !\n", p1.spell_heal);
					p1.hp -= b2.attack;
					printf("Enemy2 attacking you for %d damage\n", b2.attack);

					break;
				case 3:
					p1.spell_bolt += p1.spell_booster;
					printf("Your spell_damage is stronger !\n");
					p1.mp -= 100;
					p1.hp -= b3.attack;
					printf("Enemy3 attacking you for %d damage\n", b3.attack);
					break;
				default:
					printf("No valide choice ...\n");
					break;
			}
		}
		else
		{
			printf("You are out of mana, you must be waiting for regen\n");
			printf("The two stronger Enemy come back from the hell for killing you !\n\n");
			p1.hp -= b2.attack;
			printf("Enemy2 attacking you for %d damage\n", b2.attack);
			p1.hp -= b3.attack;
			printf("Enemy3 attacking you for %d damage\n", b3.attack);
		}
		count_round++;
	}
	if (b1.hp <= 0 && b2.hp <= 0 && b3.hp <= 0)
		printf("You WIN !!! in %d round\n", count_round);
	else
		printf("You are dead ... in %d round\n", count_round);

	return (0);
}
