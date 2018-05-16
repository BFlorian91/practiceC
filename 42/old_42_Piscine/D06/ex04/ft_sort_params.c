/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:16:17 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/25 17:38:53 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_print(char **argv)
{
	int i;

	i = 0;
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		sort;
	char	*tmp;

	if (argc == 1)
		return (0);
	sort = 1;
	while (sort)
	{
		i = 1;
		sort = 0;
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				sort = 1;
			}
			i++;
		}
	}
	ft_print(argv);
	return (0);
}
