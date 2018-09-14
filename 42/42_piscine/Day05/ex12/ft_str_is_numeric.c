/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:08:46 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/16 16:54:39 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str) - 1;
	if (str[0] == '\0')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i == len)
			return (1);
		i++;
	}
	return (0);
}
