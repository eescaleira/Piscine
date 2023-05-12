/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:53:22 by dduarte-          #+#    #+#             */
/*   Updated: 2023/02/05 15:48:31 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, char inicial, char meio, char final)
{
	int	cont;

	cont = 1;
	while (cont <= x)
	{
		if (cont == 1)
			ft_putchar(inicial);
		else if (cont == x)
			ft_putchar(final);
		else
			ft_putchar(meio);
	cont++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	contl;

	contl = 1;
	if (x > 0 && y > 0)
	{
		while (contl <= y)
		{
			if (contl == 1)
				print(x, 'A', 'B', 'C');
			else if (contl == y)
				print(x, 'A', 'B', 'C');
			else
				print(x, 'B', ' ', 'B');
		contl++;
		}
	}
}
