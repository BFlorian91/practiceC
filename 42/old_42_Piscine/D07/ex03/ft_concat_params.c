/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:38:31 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/27 11:16:48 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[i + size] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;
	int		size;

	i = 0;
	while (i < argc)
	{
		size = size + ft_strlen(argv[i]);
		i++;
	}
	str = malloc(sizeof(*str) * size);
	str[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i < argc - 1 && argv[i + 1][0] != '\0')
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
// Testing
int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
//Testing
