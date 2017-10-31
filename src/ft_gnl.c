/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 09:30:40 by chle-van          #+#    #+#             */
/*   Updated: 2017/10/28 20:46:12 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_readbuff(t_buff *buff)
{
	int		size;

	if (!(buff->buff = ft_strnew(BUFF_SIZE)))
	{
		buff->siz = -1;
		return (-1);
	}
	size = read(buff->fd, buff->buff, BUFF_SIZE);
	if (size <= 0)
	{
		buff->siz = size;
		return (buff->siz);
	}
	return (1);
}

int		ft_extract_line(t_buff *buff, char **line, char *eol)
{
	char *tmp;

	if (buff->siz == 0)
	{
		if (buff->buff[0] == '\0')
		{
			return (0);
		}
		*line = ft_strdup(buff->buff);
		if (*line)
			return (1);
		return (-1);
	}
	*line = ft_strndup(buff->buff, (eol - buff->buff));
	tmp = ft_strdup(++eol);
	ft_strdel(&buff->buff);
	buff->buff = tmp;
	if (!(buff->siz = ft_strlen(buff->buff)))
		buff->siz = 1;
	if (*line && tmp)
		return (1);
	return (-1);
}

int		ft_get_line(t_buff *buff, char **line)
{
	char	*tmp;
	char	*eol;

	while (buff->siz > 0 && !(eol = ft_strchr(buff->buff, '\n')))
	{
		if (!(tmp = ft_strnew(buff->siz + BUFF_SIZE)))
			return (-1);
		ft_strcpy(tmp, buff->buff);
		ft_strdel(&buff->buff);
		if (ft_readbuff(buff) > 0)
			buff->siz = ft_strlcat(tmp, buff->buff, buff->siz + BUFF_SIZE + 1);
		ft_strdel(&buff->buff);
		buff->buff = tmp;
	}
	if (buff->siz >= 0 && buff->buff)
		return (ft_extract_line(buff, line, eol));
	return (buff->siz);
}

int		ft_gnl(const int fd, char **line)
{
	static t_buff	*buff;
	int				res;

	if (fd < 0 || !line)
		return (-1);
	if (!buff)
	{
		buff = (t_buff *)malloc(sizeof(*buff));
		buff->buff = ft_strnew(1);
		buff->fd = fd;
		buff->siz = 1;
		buff->next = NULL;
	}
	res = ft_get_line(buff, line);
	if (buff->siz <= 0)
	{
		ft_strdel(&buff->buff);
		free(buff);
		buff = NULL;
		return (0);
	}
	return (res);
}
