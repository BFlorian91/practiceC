#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	printf("min INT: \n");
	ft_putnbr(-2147483648);

	if (argc == 2)
	{
		printf("\n\n");
		printf("Your test: \n");
		ft_putnbr(atoi(argv[1]));
	}
		return (0);
}
