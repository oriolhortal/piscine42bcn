/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:41:45 by ohortal-          #+#    #+#             */
/*   Updated: 2022/12/14 10:49:30 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
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
	res = (nb % 10) + 48;
	if (nb / 10 == 0)
	{
		write(1, &res, 1);
		return ;
	}
	nb /= 10;
	ft_putnbr(nb);
	write(1, &res, 1);
}
