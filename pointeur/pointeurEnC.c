#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_count(int *a, int *b)
{
	char resultat;
	
	ft_putstr(resultat = (*a + *b) + '0');
}

int		main(void)
{
	int a = 11;
	int b = 32;

	ft_count(&a, &b);
}
