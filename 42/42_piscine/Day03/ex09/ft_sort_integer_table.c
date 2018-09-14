/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 09:40:28 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/06 10:01:42 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int tmp;

	i = 1;
	tmp = 0;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
		i++;
	}
}
