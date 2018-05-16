
#include <stdio.h>

int		main()
{
	char	src[] = "Hello";
	char	dest[] = "olleH";

	ft_strcpy(dest, src);
	printf("Source = %s\n", src);
	printf("Dest = %s\n\n", dest);
	return (0);
}

