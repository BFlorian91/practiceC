/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 11:32:42 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/18 19:04:35 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	do_op(char operator, int a, int b)
{
	if (operator == '+')
		return (a + b);
	else if (operator == '-')
		return (a - b);
	else if (operator == '*')
		return (a * b);
	else if (operator == '/')
		return (a / b);
	else if (operator == '%')
		return (a % b);
	return (0);
}
