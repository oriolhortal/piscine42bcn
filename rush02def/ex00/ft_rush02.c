/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbopp-ib <mbopp-ib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:07:55 by mbopp-ib          #+#    #+#             */
/*   Updated: 2022/12/11 21:34:23 by mbopp-ib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnumber(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getcaracter(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*filework(char *file)
{
	int		i;
	int		fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_list) * 33);
	if (fd == -1 || tab == NULL)
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_getnumber(fd));
		ft_char(fd, c);
		tmp = ft_getcaracter(fd, c);
		tab[i].val = ft_strcopy(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}

void	ft_char(int fd, char *c)
{
	read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
}
