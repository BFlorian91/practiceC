/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_h_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 02:31:04 by                   #+#    #+#             */
/*   Updated: 2017/09/03 03:00:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_convert(int	*ptr_hours, int *ptr_min)
{
	*ptr_hours = *ptr_min / 60;
	*ptr_min = *ptr_min % 60;
}

int		main(int argc, char **argv)
{
	int		hour;
	int		min;

	hour = 0;
	min = 150;
	//Envoi de l'adresse des var's aux var's des pointeurs 
	ft_convert(&hour, &min);

	printf("%d heures et %d minutes", hour, min);

	return (0);;
}
