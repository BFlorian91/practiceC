#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
int choixNiveau = 0;

printf("====Niveau de difficulte====\n");
printf("1. Entre 1 et 100\n2. Entre 1 et 1000\n3. Entre 1 et 10000\n");
printf("Choisissez un niveau ?\n");
scanf("%d", &choixNiveau);

if (choixNiveau == 1)
{
int nombreMystere = 0, Nombre = 0, compteurCoups = 0,resultat = 0;
const int MAX = 100, MIN = 1;
resultat = 1 || 0;

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

do
{
printf("Quel est le nombre ?\n");
scanf("%d", &Nombre);

if (Nombre != nombreMystere)
{
compteurCoups++;
}
if (nombreMystere > Nombre)
{
printf("C'est plus\n");
}
if (nombreMystere < Nombre)
{
printf("C'est moins\n");
}
if (Nombre == nombreMystere)
{
printf("Super vous avez trouvez le nombre en %d coups\n", compteurCoups);
printf("\n");

do
{
printf("Voulez vous faire une autre partie ?\nRepondez par 1 pour oui et 0 pour non\n");
scanf("%d", &resultat);

if (resultat >= 1)
{
main();
}
} while (resultat != 0);
}
} while (nombreMystere != Nombre);
}

if (choixNiveau == 2)
{
int nombreMystere = 0, Nombre = 0, compteurCoups = 0, resultat = 0;
const int MAX = 1000, MIN = 1;
resultat = 1 || 0;

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

do
{
printf("Quel est le nombre ?\n");
scanf("%d", &Nombre);

if (Nombre != nombreMystere)
{
compteurCoups++;
}
if (nombreMystere > Nombre)
{
printf("C'est plus\n");
}
if (nombreMystere < Nombre)
{
printf("C'est moins\n");
}
if (Nombre == nombreMystere)
{
printf("Super vous avez trouvez le nombre en %d coups\n", compteurCoups);
printf("\n");

do
{
printf("Voulez vous faire une autre partie ?\nRepondez par 1 pour oui et 0 pour non\n");
scanf("%d", &resultat);

if (resultat >= 1)
{
main();
}
} while (resultat != 0);
}
} while (nombreMystere != Nombre);
}

if (choixNiveau == 3)
{
int nombreMystere = 0, Nombre = 0, compteurCoups = 0, resultat = 0;
const int MAX = 10000, MIN = 1;
resultat = 1 || 0;

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

printf("Quel est le nombre ?\n");
scanf("%d", &Nombre);

do
{
if (Nombre != nombreMystere)
{
compteurCoups++;
}
if (nombreMystere > Nombre)
{
printf("C'est plus\n");
}
if (nombreMystere < Nombre)
{
printf("C'est moins\n");
}
if (Nombre == nombreMystere)
{
printf("Super vous avez trouvez le nombre en %d coups\n", compteurCoups);
printf("\n");

do
{
printf("Voulez vous faire une autre partie ?\nRepondez par 1 pour oui et 0 pour non\n");
scanf("%d", &resultat);

if (resultat >= 1)
{
main();
}
} while (resultat != 0);
}
} while (nombreMystere != Nombre);
}
return 0;
}



