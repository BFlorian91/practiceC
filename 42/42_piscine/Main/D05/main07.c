#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char lol[255] = "test";
	char lol2[255] = "raw";

	printf("%d\n", ft_strncmp(lol, lol2,4));
	printf("%d", strncmp(lol, lol2, 4));

	return (0);
}
