/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:42:09 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/23 16:38:27 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

void	ft_putstr(char *str);

typedef int		t_bool;

# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 ? FALSE : TRUE)
# define TRUE 1
# define FALSE  0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
