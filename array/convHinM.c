/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convHinM.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 23:19:07 by                   #+#    #+#             */
/*   Updated: 2017/08/29 19:25:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
	char duration[257];
	scanf("%s", duration);
	int		h = atoi(duration);
	printf("H == %d\n\n", h);
	int		m /*= atoi(duration)*/;
	printf("M == %d\n\n", m);


	int		result;

	h = *duration / 100;
	m = *duration % 100;


	result = 0;

	h = h * 60;
	printf("H = %d\n", h);
	printf("M = %d\n", m);
	result = h + m;

	printf("%d\n", result);


	return (0);
}
