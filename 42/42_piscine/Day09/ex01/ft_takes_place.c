/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:54:51 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/10 11:44:28 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	morning(int hour)
{
	if (hour >= 0 && hour < 9)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 0%d.00 A.M. AND 0%d.00 A.M.\n"
				, hour, hour + 1);
	else if (hour == 9)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 09.00 A.M. AND 10.00 A.M.\n");
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour > 9 && hour < 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
				hour, hour + 1);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 01.00 P.M.\n");
}

void	ft_takes_places(int hour)
{
	morning(hour);
	if (hour > 12 && hour < 21)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 0%d.00 P.M. AND 0%d.00 P.M.\n"
				, hour - 12, hour - 11);
	else if (hour == 21)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 09.00 P.M. AND 10.00 P.M.\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 00.00 A.M.\n");
	else if (hour > 21 && hour < 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
			hour - 12, hour - 11);
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 00.00 A.M. AND 01.00 A.M.\n");
}
