/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:25:34 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/27 14:28:25 by danherna         ###   ########.fr       */
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
			if ((c == 0 | c == x -1) && (f == 0 | f == y -1))
				ft_putchar('o');
			else if ((c == 0 | c == x -1) && (f != 0 | f != y -1))
				ft_putchar('|');
			else if ((c != 0 | c != x -1) && (f == 0 | f == y -1))
				ft_putchar ('-');
			else
				ft_putchar (' ');
			c++;
		}
		ft_putchar('\n');
	f++;
	}	
}
