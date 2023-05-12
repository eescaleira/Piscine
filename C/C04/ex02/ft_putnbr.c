/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:33:39 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/06 15:14:05 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	x;

	if (nb >= 10)
	{
		x = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar(x + '0');
	}
	if (nb <= -10)
	{
		x = nb % -10;
		x = -x;
		ft_putnbr(nb / 10);
		ft_putchar(x + '0');
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb >= -9 && nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
}
