/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:43:20 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/22 19:55:46 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **str, int c)
{
	int	i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < c)
	{
		j = 0;
		while (str[i][j])
			j++;
		k += j;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	if (!(args = (char *)malloc(sizeof(char) * (ft_strlen(argv, argc) + 1))))
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			args[k] = argv[i][j];
			k++;
			j++;
		}
		if (i != argc - 1)
			args[k++] = '\n';
		i++;
	}
	args[k] = '\0';
	return (args);
}
