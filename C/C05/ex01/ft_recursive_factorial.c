/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:25:29 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/20 15:37:25 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i >= 0)
		return (ft_recursive_factorial_recur(i - 1, n * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_recur(nb, 1));
}

int		main(void)
{
	int i;

	i = 13;
	printf("%d\n", ft_recursive_factorial(i));
}