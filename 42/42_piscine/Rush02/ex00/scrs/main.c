/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:32:46 by ravernhe          #+#    #+#             */
/*   Updated: 2018/08/22 14:41:06 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_head.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 2))))
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	dest[i + 1] = '\0';
	return (dest);
}

char	*recup(char *str)
{
	char	buf[1];
	char	*tmp;
	int		red;
	int		i;

	if (!(str = (char *)malloc(sizeof(*str) * 1)))
		return (0);
	i = 0;
	str[0] = '\0';
	while ((red = read(0, buf, 1)))
	{
		tmp = ft_strdup(str);
		tmp[i] = buf[0];
		free(str);
		str = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	if (str[0] == '\0' || str[0] == '\n')
		return ("aucune");
	return (str);
}

void	ft_display(int *rushxx, int x, int y)
{
	if (rushxx[5] == 0)
		ft_putstr("aucune");
	if (rushxx[0] == 1)
		ft_disply_00(rushxx, x, y);
	if (rushxx[1] == 1)
		ft_disply_01(rushxx, x, y);
	if (rushxx[2] == 1)
		ft_disply_02(rushxx, x, y);
	if (rushxx[3] == 1)
		ft_disply_03(rushxx, x, y);
	if (rushxx[4] == 1)
		ft_disply_04(rushxx, x, y);
}

int		main(void)
{
	char	*str;
	int		x;
	int		y;
	int		*rushxx;

	x = 0;
	y = 0;
	str = NULL;
	str = recup(str);
	if ((!(rushxx = (int *)malloc(99))) || str == NULL)
		return (0);
	while (str[x] != '\n' && str[x])
	{
		x++;
	}
	while (str[y] != '\0')
	{
		y++;
	}
	y = y / (x + 1);
	if (!(rushxx = ft_comp(str, x, y)))
		return (0);
	ft_display(rushxx, x, y);
	ft_putchar('\n');
	return (0);
}
