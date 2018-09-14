#include <stdio.h>

char *ft_strupcase(char *str);

int	main(/*int argc, char **argv*/)
{
	char test[255] = "Loo oooL";

	ft_strupcase(test);
	printf("%s", test);
//	if (argc == 1)
//		printf("%s\n", ft_strupcase(argv[1]));

	return (0);
}

