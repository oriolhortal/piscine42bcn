/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:37:03 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/30 10:45:22 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putnbrr(int nb, int control0);

void	ft_putnbr(int nb)
{
	ft_putnbrr(nb, 0);
}

void	ft_putnbrr(int nb, int control0)
{
	int	res;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = 147483648;
		}
		else
			nb = nb * (-1);
	}
	if (nb == 0 && nb != control0)
		return ;
	else
		if (nb == 0)
			write (1, &nb, 1);
	control0++;
	res = (nb % 10) + 48;
	nb /= 10;
	ft_putnbrr(nb, control0);
	write(1, &res, 1);
}
