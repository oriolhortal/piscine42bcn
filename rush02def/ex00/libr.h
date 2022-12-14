/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbopp-ib <mbopp-ib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:56:16 by mbopp-ib          #+#    #+#             */
/*   Updated: 2022/12/11 21:33:43 by mbopp-ib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBR_H
# define LIBR_H

typedef struct s_list
{
	int		nb;
	char	*val;
}		t_list;
int		ft_atoi(const char *str);
char	*ft_strcopy(char *src);
void	ft_putstr(char *str);
char	*ft_getnumber(int fd);
char	*ft_getcaracter(int fd, char *c);
t_list	*filework(char *file);
int		ft_error(char *argv);
void	ft_char(int fd, char *c);

#endif
