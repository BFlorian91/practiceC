#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(char *str)
{
	int i;
	int value;

	i = 0;;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	while((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		value = value * 10;
		value =+ str[i] - '0';
		i++;
	}
	return(value);
}

int main()
{
	char str[255] = "92";
	printf("%d \n", ft_atoi(str));
	printf("%d \n", atoi(str));
	return(0);
}
