/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbopp-ib <mbopp-ib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:21:50 by mbopp-ib          #+#    #+#             */
/*   Updated: 2022/12/11 21:17:41 by mbopp-ib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strcopy(char *src)
{
	int			i;
	int			len;
	char		*dst;

	len = 0;
	dst = NULL;
	while (src[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;

	negative = 1;
	result = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
		++str;
	while (*str && (*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		++str;
		if (*str == '.' || *str == ',')
			negative = -1;
	}
	return (result * negative);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
