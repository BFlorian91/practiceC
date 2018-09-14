#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb);

int main()
{
		char lol1[255] = "toto";
		char lol2[255] = "4213";
		printf("%s\n", ft_strncat(lol1, lol2, 1));
	return (0);
}
