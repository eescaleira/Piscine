/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:12:36 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/22 21:59:31 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}

// int		main(void)
// {
// 	int tab[20];
// 	int i;
// 	int size;

// 	size = 20;
// 	i = 0;
// 	while (i < size)
// 	{
// 		tab[i] = size - i;
// 		i++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d: %d\n", i + 1, tab[i]);
// 		i++;
// 	}
// }
