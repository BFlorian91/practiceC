#include <unistd.h>

char ft_argv_display(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(*str);
}

int	main(int argc, char **argv)
{
	argc < 2 ? write(1,"\n", 1) : argc >= 2 ? ft_argv_display(argv[1]) : argc == 0;
	return(0);
}
