#include <stdio.h>

int		main()
{
	char	s1[] = "salut";
	char	s2[] = "lut";

	ft_strcmp(s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}

