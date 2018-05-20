#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int choixnbjoueur=0, nbmystere=0, hypothese=0, nbrejouer=0;
	const int MAX=100, MIN=1, again=1;
	do
	{
		printf("==MENU==\n");
		printf("1.Un joueur\n2.Deux joueurs\n");
		scanf("%d", &choixnbjoueur);

		if (choixnbjoueur==1)
		{
			int compteur=0;
			srand(time(NULL));
			nbmystere=(rand()%(MAX-MIN+1))+MIN;

			do
			{
				compteur++;
				printf("Entrez votre hypothese:\n");
				scanf("%d", &hypothese);

				if(hypothese<nbmystere)
				{
					printf("C'est plus\n");
				}
				else if(hypothese>nbmystere)
				{
					printf("C'est moins\n");
				}
				else if (hypothese==nbmystere)
				{
					printf("Felicitation vous avez reussi en %d coups\n",compteur);
				}
				else
				{
					printf("Vous n'avez pas saisi un nombre\n");
				}
			}while(hypothese!=nbmystere);
		}


		else if (choixnbjoueur==2)
		{
			int compteur=0;
			printf("Joueur 1 entrez le nombre mystere:\n");
			scanf("%d", &nbmystere);
			printf("Joueur 2 saisissez votr hypothese\n");
			do
			{
				compteur++;
				scanf("%d", &hypothese);
				if(hypothese<nbmystere)
				{
					printf("C'est plus\n");
				}
				else if (hypothese>nbmystere)
				{
					printf("C'est moins\n");
				}
				else if (hypothese==nbmystere)
				{
					printf("Felicitation vous avez reussi %d coups!\n", compteur);
				}
				else
				{
					printf("Vous n'avez pas saisi un nombre\n");
				}
			}while (hypothese!=nbmystere);
		}


		else
		{
			printf("Vous n'avez pas rentrez de nombre correct\n");
		}

		printf("==Voulez vous rejouer?==\n");
		printf("1.Oui\n2.Non\n");
		scanf("%d", &nbrejouer);
	}while (nbrejouer==again);

	return 0;
}
