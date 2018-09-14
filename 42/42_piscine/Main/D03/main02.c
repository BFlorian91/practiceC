#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(int argc, char **argv)
{
	int arg1 = atoi(argv[1]);
	int	arg2 = atoi(argv[2]);

	if (argc > 1)
	{
		printf(" => %d  |  => %d\n", arg1, arg2);
		ft_swap(&arg1, &arg2);		
		printf("=>  %d  |  => %d\n", arg1, arg2);
	}
	return (0);
}
