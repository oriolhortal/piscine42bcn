/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:39:35 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/28 16:46:46 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	comb[3];

	comb[0] = 48;
	while (comb[0] < 56)
	{
		comb[1] = comb[0] +1;
		while (comb[1] < 57)
		{
			comb[2] = comb[1] +1;
			while (comb[2] < 58)
			{
				write(1, &comb[0], 1);
				write(1, &comb[1], 1);
				write(1, &comb[2], 1);
				comb[2]++;
				if (!(comb[0] == '7'))
					write(1, ", ", 2);
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
