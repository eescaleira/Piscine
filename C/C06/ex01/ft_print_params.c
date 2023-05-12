/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:25:29 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/17 22:37:10 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		j++;
		write (1, "\n", 1);
	}
}
