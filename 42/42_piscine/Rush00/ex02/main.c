/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 19:35:30 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/05 22:54:58 by erlazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int		i;
	int		ret;
	int		neg;

	i = 0;
	neg = 1;
	ret = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		++i;
	if (str[i] == '-' && str[i])
	{
		neg = -neg;
		++i;
	}
	else if (str[i] == '+' && str[i])
		++i;
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		ret = ret * 10 + (str[i] - 48);
		++i;
	}
	return (ret * neg);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		rush(4, 4);
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
