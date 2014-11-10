/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 10:18:17 by bbecker           #+#    #+#             */
/*   Updated: 2014/11/10 19:45:03 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_fd(int const fd, t_infos *infos, char **line)
{
	int ret;

	if ((infos->state == 0) && (ret = read(fd, &infos->buf, BUFF_SIZE)) == 1)
	{
		while (infos->buf[infos->size] && infos->buf[infos->size] != '\n')
		{
			if (infos->buf[infos->size++] == 10 && infos->buf[infos->size + 1])
				infos->state = 1;
		}
		line[infos->count] = ft_strsub(infos->buf, infos->count, infos->size);
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static t_infos	*infos;
	int				ret;

	if (!infos->count)
		infos->count = 0;
	if (!infos->state)
		infos->size = 0;
	if (BUFF_SIZE < 1)
		return (0);
	if (!infos->buf)
		infos->buf = (char *)ft_memalloc((BUFF_SIZE + 1) * sizeof(infos->buf));
	if (!infos->buf)
		return (0);
	ret = ft_read_fd(fd, infos, line);
	return (ret);
}
