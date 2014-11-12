/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 10:18:17 by bbecker           #+#    #+#             */
/*   Updated: 2014/11/12 20:12:49 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	size_t	b;
	size_t	c;
	char	*data;
	size_t	d;

	b = strlen (s1);
	c = strlen (s2);
	data = (char *)ft_memalloc(sizeof(char) * (b + c + 1));
	d = 0;
	while (d < b && s1[d])
	{
		data[d] = s1[d];
		d++;
	}
	d = 0;
	while (d < c && s2[d])
	{
		data[d + b] = s2[d];
		d++;
	}
	data[b + c + 1] = '\0';
	free(s1);
	free(s2);
	return (data);
}

int		ft_write_inline(char **line, t_infos *infos)
{
	unsigned int	i;
	size_t			size;
	char			*tmp;

	tmp = infos->tmp;
	size = 0;
	i = infos->start;
	while(tmp[i] && tmp[i++] != '\n')
		size++;
	ft_putnbr(infos->start);
	ft_putendl(" ");
	ft_putnbr(infos->count);
	ft_putendl(" ");
	ft_putchar(tmp[infos->start + size]);
	line[infos->count] = ft_strsub(tmp, (unsigned int)infos->start, size);
	ft_putendl("B");
	if (!line[infos->count])
		return (-1);
	ft_putendl(line[infos->count]);
	infos->count++;
	infos->start = infos->start + i + 1;
	return (0);
}

int		ft_textsize(char **line, t_infos *infos)
{
	int i;

	infos->linenu = 0;
	while (infos->tmp[i])
	{
		if (infos->tmp[i] == 10 && !infos->tmp[i + 1]
			&& infos->tmp[i + 1] != 10)
			infos->linenu++;
		i++;
	}
	// Line ne reste pas alloue, et n'est pas transmis au autres fonctions.
	//line = (char **)ft_memalloc(sizeof(char *) * (infos->linenu + 1));
	//if (!line)
	//	return (-1);
	//line[infos->linenu] = '\0';
	return (0);
}

int		ft_read_fd	(int const fd, t_infos *infos, char **line)
{
	int		ret;
	char	*buf;

	buf = (char *)ft_memalloc((BUFF_SIZE + 1) * sizeof(char));
	if (!buf)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (ret < 0)
			return (ret);
		infos->tmp = ft_strjoin2(infos->tmp, buf);
		buf = (char *)ft_memalloc((BUFF_SIZE + 1) * sizeof(char));
		if (!buf || infos->tmp == NULL)
			return (-1);
	}
	infos->state = 1;
	if (ret >= 0)
		ret = ft_textsize(line, infos);
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	static t_infos	*infos;
	int				ret;

	ret = 0;
	if (!infos)
		infos = ft_memalloc(sizeof(infos));
	if (!infos->count)
		infos->count = 0;
	if (!infos->start)
		infos->start = 0;
	if (BUFF_SIZE < 1)
		return (-1);
	if (infos->tmp == NULL)
		infos->tmp = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (infos->state == 0)
		ret = ft_read_fd(fd, infos, line);
	if (ret >= 0)
		ret = ft_write_inline(line, infos);
	if (ret >= 0 && infos->count <= infos->linenu)
		ret = 1;
	return (ret);
}
