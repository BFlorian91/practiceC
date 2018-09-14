#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
		char lol1[255] = "Hello";
		char lol2[255] = "World";
		ft_strcat(lol1, lol2);
		printf("%s", lol1);
	return (0);
}
