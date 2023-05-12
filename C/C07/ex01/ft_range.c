/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:39:08 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/22 02:13:00 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int *) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}

// int main()
//  {
// 	ft_range(41, 50);
//  	return(0);
//  }