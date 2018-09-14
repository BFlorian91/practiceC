#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(/*int argc, char **argv*/)
{
	char test[255] = "LOOOOooO OOL";

	ft_strlowcase(test);
	printf("%s", test);
	return (0);
}

