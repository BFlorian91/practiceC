#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		menu()
{
	int		choice;

	choice = 0;
	while (choice < 1 || choice > 3)
	{
		printf("==> Game Settings <== \nChoose your difficulty: \n");
		printf("1. 1 - 100\n");
		printf("2. 1 - 1000\n");
		printf("3. 1 - 10000\n");
		printf("What is your choice?\n");
		scanf("%d", &choice);
	}
	return (choice);
}

int		main()
{
	while (1) //temps que le programme est en cours de fonctionnement
	{
		int MAX = 0, MIN = 0;
		/* ----- Choix du niveau de difficulty ----- */
		switch(menu())
		{
			case 1:
				MAX = 100, MIN = 1;
				break;
			case 2:
				MAX = 1000, MIN = 1;
				break;
			case 3:
				MAX = 10000, MIN = 1;
				break;
		}
		/*--------------------------------------------*/
		int		player_number;
		int		nombreMystere;
		int		count; //variable compteur de coup


		srand(time(NULL));
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		player_number = 0;
		count = 1; //initialisation de la variable compteur de coup
		
		/*------ Gestion du Plus ou Moins ------*/
		while (player_number != nombreMystere)
		{
			printf("Enter your number:\n");
			scanf("%d", &player_number);
			if(player_number < nombreMystere)
				printf("\n ==== it's more! ====\n\n");
			else if(player_number > nombreMystere)
				printf("\n ==== it's less! ====\n\n");
			else
				printf("Good Job! You win in %d round!\n", count);
			count++;//itteration de la valeur du compteur
		}
		/* --------------------------------------*/
		char	replay;
		char	y = 'y';

		/*------ Gestion du restart / ou arret du jeu ------*/
		printf("\nDo you want play again?(y/n)\n");
		scanf("%s", &replay);
		if (replay == y)
			printf("You play a new game !\n");
		else
			return (0);
		/*----------------------------------------------------*/
	}
	return (0);
}
