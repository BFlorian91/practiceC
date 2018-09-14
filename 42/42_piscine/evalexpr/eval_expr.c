/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 11:13:14 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/19 18:25:46 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*white_spaces(char *str)
{
	char *str_without_spaces;
	int i;
	int j;

	str_without_spaces = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			str_without_spaces[j] = str[i];
			j++;
		}
		i++;
	}
	str_without_spaces[j] = '\0';
	return (str_without_spaces);
}
