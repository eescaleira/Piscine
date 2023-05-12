/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:51:18 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/04 18:30:13 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	f1(int x, int y, int z )
{
	write(1, &z, 1);
	write(1, &y, 1);
	write(1, &x, 1);
	if (z != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	z = '0';
	while (z <= '7')
	{
		y = z +1;
		while (y <= '8')
		{
		x = y +1;
			while (x <= '9')
			{
				f1 (x, y, z);
				x++;
			}
			y++;
		}
		z++;
	}
}
