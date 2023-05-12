/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:27:44 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/17 22:39:10 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;

	j = 1;
	i = 0;
	c = argc -1;
	while (c > 0)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write (1, &argv[c][i], 1);
			i++;
		}
	c--;
		write (1, "\n", 1);
	}
}
