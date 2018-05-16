#include <stdio.h>
#include <string.h>

int		main()
{
	int		nb = 2;
	char	src[40] = "gtfo";
	char	dest[40] = "test";
	printf("%s\n", strncat(dest, src, nb));
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}

