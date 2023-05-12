/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescalei <eescalei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 23:04:10 by eescalei          #+#    #+#             */
/*   Updated: 2023/02/14 17:33:44 by eescalei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

//int main ()
//{
//	char *s1;
//	char *s2;
//	s1 = "hello";
//	s2 = "heLl";
//	printf("%d", ft_strncmp(s1, s2, 4));
//}
