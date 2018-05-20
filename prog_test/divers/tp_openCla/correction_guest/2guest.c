#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
      int difficulte, // Le niveau de dificulté choisis
      veuxArreter = 0, // Si il choisis d'arreter
      MAX, // Le nombre maximum lors du tirage du nombre au hasard
      choixNbMystere,
      aTrouve,
      coupsUtilises;
      const int MIN = 1; // le nombre minimum lors du blablabla c'est logique de toute façon personne ne va lire ça
         while(veuxArreter == 0)
         {
             int aChoisis1 = 0;
             coupsUtilises= 0;
             aTrouve = 0;
    printf("Choisissez le niveau de difficulte : \n\n 1 : entre 1 et 100\n 2 : entre 1 et 1000\n 3 : entre 1 et 10000\n"); //bonne lecture ^^'
                                do{
        scanf("%d", &difficulte);
           switch(difficulte)
           {
           case 1:
               MAX = 100;
               aChoisis1 =1;
            break;

            case 2:
                MAX = 1000;
                aChoisis1 =1;
            break;

            case 3:
                MAX = 10000;
                aChoisis1 =1;
            break;

            default:
                printf("Choisissez un nombre valide !");
                aChoisis1 = 0;
            break;
           }
                                }while(aChoisis1 == 0);
                                   srand(time(NULL));
                                   int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                                    do
                    {
                        printf("Devinez le nombre ?");
                          scanf("%d", &choixNbMystere);
                               if(choixNbMystere > nombreMystere)
                               {
                                   printf("C'est moins !\n\n");
                                   coupsUtilises += 1;
                               }
                               else if(choixNbMystere < nombreMystere)
                               {
                                   coupsUtilises +=1;
                                   printf("C'est plus !\n\n");
                               }
                               else if(choixNbMystere == nombreMystere)
                               {
                                   aTrouve = 1;
                               }
                    }while(aTrouve == 0);
                    printf("GG, bien joue !!!\n\nTU as reussi a trouver le nombre mystere (%d) en %d coup(s) !\n\n", nombreMystere, coupsUtilises);
                    printf("Veux tu continer ? \n Oui = 0\n Non = autre\n");
                      scanf("%d", &veuxArreter);
    }
    return 0;
}
