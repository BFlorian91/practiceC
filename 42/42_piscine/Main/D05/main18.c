#include <string.h>
#include <stdio.h>

unsigned int *ft_strlcat(char *dest, char *src, int nb);

int main()
{
	char dest[255] = "La France";
	char src[255] = "Chateaubriant";
	unsigned int size;

	size = 20;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%lu", strlcat(dest, src, size));
	return (0);
}
