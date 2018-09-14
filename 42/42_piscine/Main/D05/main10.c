#include <stdio.h>
#include <string.h>
char *ft_strcapitalize(char *str);

int	main(/*int argc, char **argv*/)
{
	char test[255] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(test);
	printf("%s", test);

	return (0);
}

