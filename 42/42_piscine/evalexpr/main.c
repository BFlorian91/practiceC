/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:24:08 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/18 19:48:44 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/mylib_ft.h"

char	*white_spaces(char *str);
void	ft_putstr(char *str);

int		main()
{


/*	if (argc == 2)
	{
		white_spaces(*argv);
		ft_putstr(*argv);
	}
*/
	char test[255] = " 2  +  2  (3  *3 )";
	white_spaces(test);
	ft_putstr(test);
}
