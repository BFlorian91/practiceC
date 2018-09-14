#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("My ft_atoi: %d\n\n", ft_atoi(argv[1]));	
		printf("<STDLIB> atoi: %d\n", atoi(argv[1]));	
	}
	return (0);
}
