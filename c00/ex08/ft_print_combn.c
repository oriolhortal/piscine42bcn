/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohortal- <ohortal-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:29:57 by ohortal-          #+#    #+#             */
/*   Updated: 2022/11/30 12:30:12 by ohortal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n);
void	print_array(int v[], int size, int last);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(int v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
		{
			ft_putchar(v[i++]);
		}
		return ;
	}
	while (i < size)
	{
		ft_putchar(v[i++]);
	}
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	flag;
	int	base;
	int	i;
	int	v[10];
	int	v_max[10];

	i = 0;
	while (i < n)
	{
		v[i] = i +48;
		v_max[i] = (10 - n) + i + 48;
		++i;
	}
	print_array(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		flag = n -1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}
