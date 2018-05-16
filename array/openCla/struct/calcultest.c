/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcultest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 06:53:43 by                   #+#    #+#             */
/*   Updated: 2017/09/08 08:21:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		account;
	int		salary;
	int		taxe;
	int		apple_prel;
	int		time;

	account = 921;
	salary = 470;
	taxe = 55;
	time = 10;
	apple_prel = 225 - 120;

	printf("==================== Florian Finance ======================\n\n");
	while (time > 0)
	{
		account += salary - (taxe + apple_prel);
		if (time == 7)
			account += 200;
		printf("Mois: %d || Solde du compte = %d$\n\n", time, account);
		time--;
	}
	printf("===========================================================\n\n");
	if (time == 0)
	{
		salary -= (taxe + apple_prel);
		printf("Frais Didier: 120$/mois\n\n");
		printf("Salaire concret: %d$/mois\n", salary);
		salary = 470;
	}
	return (0);
}
