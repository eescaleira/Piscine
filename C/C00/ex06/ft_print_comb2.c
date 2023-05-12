/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:55:58 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/04 19:03:45 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	numb(int a, int b)
{
	char	arrguard[5];

	arrguard[0] = b / 10 +48;
	arrguard[1] = b % 10 +48;
	arrguard[2] = ' ';
	arrguard[3] = a / 10 +48;
	arrguard[4] = a % 10 +48;
	if (arrguard[0] != arrguard[1] || a > b)
	{
		write (1, arrguard, 5);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	b = 00;
	while (b <= 98)
	{
		a = b +1;
		while (a <= 99)
		{
			numb(a, b);
			if (b < 98)
			{
				write (1, ", ", 2);
			}
		a++;
		}
	b++;
	}
}
