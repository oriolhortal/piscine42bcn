/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:37:03 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/30 16:26:27 by ohortal-         ###   ########.fr       */
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

int main ()
{
	ft_putnbr(2147487);
	return (0);
}
