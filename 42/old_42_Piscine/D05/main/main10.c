
#include <stdio.h>

int		main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}

