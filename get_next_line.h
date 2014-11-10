/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 09:51:47 by bbecker           #+#    #+#             */
/*   Updated: 2014/11/10 18:46:38 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>


typedef	struct		s_infos
{
	char	*buf;
	int		start;
	int		size;
	int		state;
	int		count;
}					t_infos;

int get_next_line(int const fd, char **line);

#endif
