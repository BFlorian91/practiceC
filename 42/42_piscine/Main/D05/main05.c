#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main()
{
	char str[255] = "Hello Worm Wor--ld is mine";
	char to_find[255] = "is";

	printf("Before: %s\n\n", str);

	printf("After: %s\n\n", ft_strstr(str, to_find));

	printf("True Func: %s", strstr(str, to_find));
	return (0);
}
