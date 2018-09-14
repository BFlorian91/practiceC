/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:10:42 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/10 14:51:41 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	int tab[3];
	int index;
	int tmp;

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	tmp = 0;
	index = 1;
	while (index < 3)
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
	return (tab[1]);
}
