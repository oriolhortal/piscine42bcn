/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:25:34 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/27 15:36:49 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 0;
	while (f < y & x != 0)
	{
		c = 0;
		while (c < x)
		{
			if ((c == 0 & f == 0) | (c == 0 & f == y -1))
				ft_putchar('A');
			else if ((c == x -1 && f == 0) | (c == x -1 && f == y -1))
				ft_putchar('C');
			else if (c != 0 && f != 0 && c != x -1 && f != y -1)
				ft_putchar (' ');
			else
				ft_putchar ('B');
			c++;
		}
		ft_putchar('\n');
	f++;
	}	
}
