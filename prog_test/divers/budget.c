/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   budget.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <florian>                                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 06:59:38 by                   #+#    #+#             */
/*   Updated: 2017/12/16 09:24:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>


void	wait(void)
{
	float	time = 1.8;

	sleep(time);
}

int		main(int	argc, char	**argv)
{
	float	tel = 24.99;
	float	itunes = 9.99;
	float	netflix = 10.99;
	float	mutuel = 23.06;
	float	ipad = 107.7;
	float	imac = 102.89;
	float	cours = 150.00;

	float	money[7] = {tel, itunes, netflix, mutuel, ipad, imac, cours};

	float	account = 4305.51;
	float	memory = 4305.51;


	int month;

	for (month = 1; month <= 12; month++)
	{
		int  i = 0;
		
		if (month <= 6)
		{
			while (money[i])
			{
				memory -= money[i];
				i++;
			}
		}
		else
		{
			//renitialisation du tab
			i = 0;
			while(money[i])
			{
				memory -= money[i] - money[5];
				i++;
			}
		}
		account += memory; 
		printf("Mois %d: %.2f\n\n", month, account);
		wait();
	};

	return(0);
}

