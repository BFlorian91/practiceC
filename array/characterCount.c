/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characterCount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:56:21 by                   #+#    #+#             */
/*   Updated: 2017/08/21 20:59:26 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int		main()
{
	int i;

	i = 0;
	char	string[] = "coucou";
	printf("%d", ft_strlen(string));
	return (0);
}
