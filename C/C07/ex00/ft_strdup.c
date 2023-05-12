/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:12:45 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/22 01:00:25 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i])
		i++;
	cpy = (char *) malloc(sizeof(char) * i);
	i = 0;
	if (cpy == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
		return (cpy);
	}
}

// int main()
// {
// 	printf("%s", ft_strdup("hello"));
// 	return(0);
// }