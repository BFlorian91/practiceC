#include <unistd.h>

void ft_aff_a(char *str)
{
	int i;
	int count;
	char letter;

	i = 0;
	count = 0;
	letter = 'a';

	while(str[i])
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			write(1,&letter,1);
			count++;
		}
		i++;
	}
	// count check s'il y a bien un > a < dans l'argv si non alors \n else osef
	count == 0 ? write(1,"\n",1) : count == 1;
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;

	while (++i < argc)
	{
		if (argc == 2)
			ft_aff_a(argv[i]);
		else if (argc > 2)
			write(1,"a",1);
		i++;
	}
	// S'il n'y a pas d'argument \n else osef
	argc == 1 ? write(1,"\n",1) : argc == 0;
	return(0);
}
