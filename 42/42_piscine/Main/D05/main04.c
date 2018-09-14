#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char origin[255] = "Hellowww";
	char cpy_test[255] = "***********";
	unsigned int n = 4;

	printf("src = %s  || dest = %s \n\n", origin, cpy_test);
	ft_strncpy(cpy_test, origin, n);
	printf("src = %s  || dest = %s \n", origin, cpy_test);


	return (0);
}
