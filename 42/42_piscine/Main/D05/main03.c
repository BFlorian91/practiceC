#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{
	char origin[255] = "Hello";
	char cpy_test[255] = "********";

	printf("src = %s  || dest = %s \n\n", origin, cpy_test);

	ft_strcpy(cpy_test, origin);
	
	printf("src = %s  || dest = %s \n\n", origin, cpy_test);
	return (0);
}
