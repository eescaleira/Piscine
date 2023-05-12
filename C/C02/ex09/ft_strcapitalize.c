/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:14:04 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/22 22:43:24 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
