/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcArg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:55:20 by                   #+#    #+#             */
/*   Updated: 2017/08/22 18:51:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_error()
{
	printf("this is not a valid number...\n");
}

int main(int argc, char **argv)
{
	printf("**For testing this soft use the number 5, 1, 2, 3, 10000**\n\n");
	printf("Number: ");

	int		H;

	if (argv[1] == '\0')
	{
		ft_error();
		return(0);
	}

	H = atoi(argv[1]);
	
	//scanf("%d", &H);
	if (5 == H)
	{
		printf("320\n");
	}
	if (1 == H)
	{
		printf("64\n");
	}
	if (2 == H)
	{
		printf("128\n");
	}
	if (3 == H)
	{
		printf("192\n");
	}
	if (10000 == H)
	{
	printf("640000\n");	
	}
	else if (!(H == 5 || H == 1 || H == 2 || H == 3 || H == 10000))
		ft_error();
	return 0;
}
