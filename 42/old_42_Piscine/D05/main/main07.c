#include <string.h>
#include <stdio.h>
int		main()
{
	char s1[] = "ssssssssssssssodsadlks";
	char s2[] = "sfsfsssi";
	unsigned int	n = 5;

	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp( s1, s2, n));
	return (0);
}

