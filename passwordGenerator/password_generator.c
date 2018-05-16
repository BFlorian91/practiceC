#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

void	password_gen(int size)
{
	int i;
	int j;
	int k;
	int l;

	// amelioration cool, tab 2D.

	char *chars_caps;
	chars_caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *chars;
	chars = "abcdefghijklmnopqrstuvwxyz";

	char *nums;
	nums = "0123456789";

	char *chars_spaces;
	chars_spaces = "!/@#$%^&*()_+>?<";
	
	// reset de la base random a chaque lancement de programme.
	srand(time(NULL));

	// calcule un chiffre random en fonction de la taille du tableau.
	i = rand() % ft_strlen(chars_caps);
	j = rand() % ft_strlen(chars_spaces);
	k = rand() % ft_strlen(chars);
	l = rand() % ft_strlen(nums);

	printf("Votre mot de passe est: ");
	while(size > 0)
	{
		printf("%c%c%c%d", chars_caps[i], chars_spaces[j], chars[k], nums[l]);
		// Generation d'un random maison lul!
		i += 2;
		j -= 2;
		k--;
		l++;
		size--;
	}
	printf("\n");
}

int main (void)
{
	password_gen(3);
	return(0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i])
		i++;
	return(i);
}
