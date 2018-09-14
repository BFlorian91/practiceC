#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char lol[255] = "---23bonjour";

	printf("%d\n", ft_atoi(lol));
	printf("%d", atoi(lol));
}
