/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 10:52:46 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/12 14:38:55 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else if (!(*s1) && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 && *s2 && *s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (!(*s1) && !(*s2) && *s1 == *s2)
		return (1);
	return (0);
}