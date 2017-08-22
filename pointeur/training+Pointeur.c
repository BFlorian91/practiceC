/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   training+Pointeur.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:11:24 by                   #+#    #+#             */
/*   Updated: 2017/08/22 15:26:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_stupid_function(int *iph7, int *mbp, int *stuff_Apple)
{
	*iph7 = 764;
	*mbp = 1384;
	*stuff_Apple = *iph7 + *mbp;
}

int		 main(void)
{
	int		iphone7;
	int		macbookPro;
	int		fullEquiped;

	iphone7 = 0;
	macbookPro = 0;
	fullEquiped = 0;

	printf("Prix Iphone7: %d\nPrix MBP: %d\nPrix Total: %d\n\n", iphone7, 
	macbookPro, fullEquiped);
	ft_stupid_function(&iphone7, &macbookPro, &fullEquiped);
	printf("Prix Iphone7: %d\nPrix MBP: %d\nPrix Total: %d\n", iphone7, 
	macbookPro, fullEquiped);

	return (0);
}
