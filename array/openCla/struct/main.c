#include <stdio.h>
#include "struct.h"

int		main()
{
	typedef struct Personne Personne;
	struct Personne
	{
		char nom[100];
		char prenom[100];
		char adresse[256];
		int	 age;
	};

	int people = 2;

	while (people > 0)
	{
		printf("What is your name?\n");
		scanf("%s", Personne.nom)
		people--;
	}
	printf("prenom %d:%s",&people, Personne);
	return(0);
}
