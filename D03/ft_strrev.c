#include <stdio.h>

char	*ft_strrev(char *str)
{
	int size_str;
	int reverse_counter;

	char tmp;

	size_str = 0;
	reverse_counter = 0;

	while(str[size_str])
		size_str++;
	size_str = size_str - 1;
	while(reverse_counter < size_str)
	{
		tmp = str[size_str];
		str[size_str] = str[reverse_counter];
		str[reverse_counter] = tmp;
		reverse_counter++;
		size_str--;
	}
	return(str);
}

int main()
{
	char str[255] = "florian est le plus fort!";
	printf("%s", ft_strrev(str));
	return(0);
}
