#include <unistd.h>
#include <stdio.h>

char ft_argv_display(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);

	return(*str);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
		i++;

	argc < 2 ? write(1,"\n", 1) : argc == i ? ft_argv_display(argv[i - 1]) :
	argc == 0;
	return(0);
}
