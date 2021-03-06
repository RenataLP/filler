/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 15:39:10 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/14 20:01:14 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_ft2(int ret, int fd, char **descripts, char **line)
{
	if (ret == BUFF_SIZE)
		return (get_next_line(fd, line));
	if (!(*line = ft_strdup(descripts[fd])))
	{
		ft_strdel(&descripts[fd]);
		return (-1);
	}
	ft_strdel(&descripts[fd]);
	return (1);
}

int		ft_ft(int fd, char **descripts, int ret)
{
	char	*tmp;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (descripts[fd] == NULL)
		{
			if (!(descripts[fd] = ft_strnew(1)))
			{
				ft_memdel((void **)&descripts[fd]);
				return (-1);
			}
		}
		if (!(tmp = ft_strjoin(descripts[fd], buf)))
		{
			ft_memdel((void **)&descripts[fd]);
			return (-1);
		}
		ft_memdel((void **)&descripts[fd]);
		descripts[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (ret);
}

int		ft_add_string(char **descripts, char **line, int fd, int ret)
{
	int		i;
	char	*tmp;

	i = 0;
	while (descripts[fd][i] != '\n' && descripts[fd][i] != '\0')
		i++;
	if (descripts[fd][i] == '\n')
	{
		if (!(*line = ft_strsub(descripts[fd], 0, i)))
			return (-1);
		if (!(tmp = ft_strdup(descripts[fd] + i + 1)))
			return (-1);
		ft_memdel((void **)&descripts[fd]);
		descripts[fd] = tmp;
		if (descripts[fd][0] == '\0')
			ft_strdel(&descripts[fd]);
	}
	else if (descripts[fd][i] == '\0')
	{
		if (!(ft_ft2(ret, fd, descripts, line)))
			return (-1);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	static char *descripts[MAX_FD];

	ret = 0;
	if (fd < 0 || line == NULL)
		return (-1);
	ret = ft_ft(fd, descripts, ret);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && descripts[fd] == NULL)
		return (0);
	return (ft_add_string(descripts, line, fd, ret));
}
