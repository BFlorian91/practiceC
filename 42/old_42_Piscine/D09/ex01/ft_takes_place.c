/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:50:24 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/14 14:06:36 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	if (hour >= 0 || hour <= 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	else if (hour == 0 && hour == 24)
		printf("12.00 P.M. AND 1.00 A.M.\n");
	else if (hour == 12)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 12)
		printf("%d P.M. AND %d P.M.\n", hour - 12, hour - 11);
	else if (hour < 12)
		printf("%d A.M. AND %d A.M.\n", hour, hour + 1);
}
