/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbopp-ib <mbopp-ib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:12:32 by mbopp-ib          #+#    #+#             */
/*   Updated: 2022/12/11 21:34:19 by mbopp-ib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		getdec(int nb);
int		getmult(int nb);
void	ft_print(int n, t_list *tab, int *first);
int		ft_error(char *ag);

int	main(int argc, char **argv)
{
	t_list	*tab;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (argc == 2)
	{
		if (ft_error(argv[1]))
			return (0);
		tab = filework("numbers.dict");
		ft_print(ft_atoi(argv[1]), tab, first);
		free(tab);
	}
	else if (argc == 3)
	{
		if (ft_error(argv[2]))
			return (0);
		tab = filework(argv[1]);
		ft_print(ft_atoi(argv[2]), tab, first);
		free(tab);
	}
	return (0);
}

int	ft_error(char *ag)
{
	int		i;
	char	flag;

	i = 0;
	flag = 'f';
	while (ag[i])
	{
		if ((ag[i] >= 'a' && ag[i] <= 'z') || (ag[i] >= 'A' && ag[i] <= 'Z'))
			flag = 't';
		if (i > 10 || (i == 9 && (ag[0] == '8' || ag[0] == '9')))
			flag = 't';
		i++;
	}
	if (ft_atoi(ag) < 0 || flag == 't')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

void	ft_print(int n, t_list *tab, int *first)
{
	int	i;
	int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	getmult(int nb)
{
	if (nb > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}
