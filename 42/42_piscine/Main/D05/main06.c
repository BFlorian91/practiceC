#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main()
{
	char lol[255] = "aa-	aa;flskfsl;";
	char lol2[255] = "aZZdsflksdf";

	printf("%d\n", ft_strcmp(lol, lol2));
	printf("%d", strcmp(lol, lol2));

	return (0);
}
