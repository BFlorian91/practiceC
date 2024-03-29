/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 19:35:30 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/11 09:53:56 by flbeaumo         ###   ########.fr       */
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
	int grid[9][9] =
	{
		{9,0,0,1,0,0,0,0,5},
		{0,0,5,0,9,0,2,0,1},
		{8,0,0,0,4,0,0,0,0},
		{0,0,0,0,8,0,0,0,0},
		{0,0,0,7,0,0,0,0,0},
		{0,0,0,0,2,6,0,0,9},
		{2,0,0,3,0,0,0,0,6},
		{0,0,0,2,0,0,9,0,0},
		{0,0,1,9,0,4,5,7,0}
	};
/*	if (argc != 3)
		grid(4, 4);
	if (argc == 3)
		grid(ft_atoi(argv[1]), ft_atoi(argv[2]));
*/

	return (0);
}
