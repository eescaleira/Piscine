/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 23:44:59 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/13 00:11:40 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	x;
	unsigned int	y;

	a = ft_strlen(dest);
	b = 0;
	x = ft_strlen(dest);
	y = ft_strlen(src);
	if (size < 1)
		return (y + size);
	while (src[b] && a < size - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	if (size < x)
		return (y + size);
	else
		return (x + y);
}
