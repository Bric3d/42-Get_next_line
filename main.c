/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:48:51 by bbecker           #+#    #+#             */
/*   Updated: 2014/11/13 16:50:14 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "get_next_line.h"
#include "libft.h"
/*
 * static void ft_mem_hd(void *pptr, t_ulong n)
 * {
 * t_uchar *ptr = (t_uchar*)pptr;
 * t_uchar *tptr = ptr;
 * ptr += n;
 * while (tptr < ptr)
 * {
 * printf("\t %p | %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x ",
 * tptr, tptr[0], tptr[1], tptr[2], tptr[3], tptr[4], tptr[5], tptr[6], tptr[7],
 * tptr[8], tptr[9], tptr[10], tptr[11], tptr[12], tptr[13], tptr[14], tptr[15]);
 * printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|\n",
 * isprint(tptr[0]) ? tptr[0] : '.', isprint(tptr[1]) ? tptr[1] : '.',
 * isprint(tptr[2]) ? tptr[2] : '.', isprint(tptr[3]) ? tptr[3] : '.',
 * isprint(tptr[4]) ? tptr[4] : '.', isprint(tptr[5]) ? tptr[5] : '.',
 * isprint(tptr[6]) ? tptr[6] : '.', isprint(tptr[7]) ? tptr[7] : '.',
 * isprint(tptr[8]) ? tptr[8] : '.', isprint(tptr[9]) ? tptr[9] : '.',
 * isprint(tptr[10]) ? tptr[10] : '.', isprint(tptr[11]) ? tptr[11] : '.',
 * isprint(tptr[12]) ? tptr[12] : '.', isprint(tptr[13]) ? tptr[13] : '.',
 * isprint(tptr[14]) ? tptr[14] : '.', isprint(tptr[15]) ? tptr[15] : '.');
 * tptr += 16;
 * }
 * }
 * */
int main(int ac, char **av)
{
	char	*line = NULL;
	int	fd = 0;
	int	ret = 42;
	if (ac > 1)
	{
		if ((fd = open(av[1], O_RDONLY)) > 0)
		{
			while ((ret = get_next_line(fd, &line)) > 0)
				puts(line);
			if (ret < 0)
				printf("/\e[1;31m!\e[0m\\ error reading '%s'\n", av[1]);
			close(fd);
		}
		else
			printf("/\e[1;31m!\e[0m\\ error opening '%s'\n", av[1]);
	}
	else
		while ((ret = get_next_line(0, &line)) > 0)
			puts(line);
	return (0);
}
/*
 * void ft_shift_nl(char *buff, unsigned int size, unsigned int end);
 * int main(void)
 * {
 * char *buf = malloc(20000);
 * bzero(buf, 20000);
 * int fd = 0;
 * int ret = 42;
 * if ((fd = open("libft.h", O_RDONLY)) > 0)
 * {
 * read (fd, buf, 20000);
 * while (*buf)
 * {
 * char *tbuff = buf;
 * while (*tbuff != '\n')
 * ft_putchar(*tbuff++);
 * ft_putstr("$!\n");
 */// ft_mem_hd(tbuff, 120);
//ft_shift_nl(buf, 20000, 0);
// puts("-----------------------------------");ft_mem_hd(tbuff, 120);
// }
// close(fd);
// }
// exit(0);
// }
// */
