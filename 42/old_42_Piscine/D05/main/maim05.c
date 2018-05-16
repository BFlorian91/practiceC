
#include <stdio.h>
#include <string.h>

int		main()
{
	char	str[] = "helloWorlddcfvvsv";
	char	to_find[] = "World"
;
	ft_strstr(str, to_find);
	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}

