/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:12:15 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/28 16:48:16 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);
void	imprimir(int *c);

void	ft_print_comb2(void)
{
	int	c[4];

	c[0] = '0';
	while (c[0] <= '9')
	{
		c[1] = '0';
		while (c[1] <= '9')
		{
			c[2] = c[0];
			c[3] = c[1] +1;
			while (c[2] <= '9')
			{
				while (c[3] <= '9')
				{
					imprimir(c);
					c[3]++;
				}
				c[2]++;
				c[3] = '0';
			}
			c[1]++;
		}
		c[0]++;
	}
}

void	imprimir( int *c)
{
	write(1, &c[0], 1);
	write(1, &c[1], 1);
	write(1, " ", 1);
	write(1, &c[2], 1);
	write(1, &c[3], 1);
	if (!(c[0] == '9' && c[1] == '8' && c[2] == '9' && c[3] == '9'))
		write(1, ", ", 2);
}
