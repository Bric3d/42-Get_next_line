/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 11:38:30 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/09 11:35:19 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_lst
{
	char			*buf;
	int				fd;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(int fd, char **line);

#endif
