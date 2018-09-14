/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:24:43 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/15 10:44:55 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = tmp;
				i = 0;
			}
			i++;
		}
		i = 0;
		while (argv[++i])
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
