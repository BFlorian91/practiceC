/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeaumon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:35:10 by fbeaumon          #+#    #+#             */
/*   Updated: 2017/07/12 20:05:09 by fbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}
//for testing ////////////////////////////////////////////////
int main()
{
        char str[255] = "Bonjour, comment vas tu?";
        printf("%s", ft_strrev(str));
        return(0);
}
///////////////////////////////////////////////////////////////
