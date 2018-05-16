#include <stdio.h>
int		main(void)
{
	char	src[] = "Salut";
	char	dest[] = "Hezaup";
	unsigned int	n = 3;

	ft_strncpy(dest, src, n);
	printf("src = %s \n\n", src);
	printf("dest = %s\n\n", dest);
	return (0);
}

