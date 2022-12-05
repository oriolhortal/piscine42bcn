/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:01:54 by ohortal-          #+#    #+#             */
/*   Updated: 2022/12/02 10:20:54 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	j;

	a = 0;
	j = size -1;
	while (a < j)
	{
		i = tab[j];
		tab[j] = tab[a];
		tab[a] = i;
		a++;
		j--;
	}
}
