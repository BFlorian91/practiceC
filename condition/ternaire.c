/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ternaire.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 03:31:27 by                   #+#    #+#             */
/*   Updated: 2017/08/30 03:38:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	int		age;
	int		majeur;

/*----------- Normal condition ---------*/
	if (majeur)
		age = 18;
	else
		age = 17;

/*----------- ternaire condition ---------*/

	age = (majeur) ? 18 : 17;

	return (0);
}
