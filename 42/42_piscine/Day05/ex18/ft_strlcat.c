/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:36:11 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/08/17 15:19:10 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int j;
	unsigned int size_limit;

	dest_size = 0;
	j = 0;
	while (dest[dest_size])
		dest_size++;
	size_limit = (size - 1) - dest_size;
	while (src[j] && j < size_limit)
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	return (dest_size);
}
