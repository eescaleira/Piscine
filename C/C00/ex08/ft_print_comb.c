/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:28:24 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/12 20:14:06 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int ft_get_p(int arr[], int n)
{
	int i;
	int m;

	i = 0;
	m = 10;
	while (i < n)
	{
		if (arr[n] == m)
		{
			return(i -1);
		}
		if (i == (n -1) && arr[i] < m)
		{
			return(i);
		}
		i++;
		
	}
	return(-1);
}

void ft_putarr(int arr[], int n)
{ 
	int i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] +'0');
		i++;
	}
}

void add(int arr[],int n,int p)
{
	int i;
	
	i = p +1;
	arr[p]++;
	while (i <= n)
	{
		arr[i] = arr[i -1] +1;
		i++;
	}
}

void ft_print_combn (int n)
{
	int	i;
	int p;
	int arr[n];
	
	i = 0;
	if(0 < n && n < 10)
	{
		while (i < n)
		{
			arr[i] = i;
			i++;
		}
		while (ft_get_p(arr, n) != -1)
		{
			p = ft_get_p(arr, n);
			ft_putarr(arr, n);
			add(arr, n, p);
			write(1, ", ", 2);
		}
		ft_putarr(arr, n);
	}
}

int		main(void)
{
	ft_print_combn (2);
	return (0);
}