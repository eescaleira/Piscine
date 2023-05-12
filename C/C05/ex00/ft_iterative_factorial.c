/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:08:55 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/20 15:36:32 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}

int		main(void)
{
	int i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(10));
}
