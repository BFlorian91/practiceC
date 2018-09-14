/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:10:42 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/10 14:53:32 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int tmp;
	int index;
	int result;

	tmp = 0;
	index = 1;
	while (index < length)
	{
		if (tab[index] < tab[index - 1])
		{
			tmp = tab[index];
			tab[index] = tab[index - 1];
			tab[index - 1] = tmp;
			index = 0;
		}
		index++;
	}
	result = tab[length - 1];
	return (result);
}
