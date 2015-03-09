/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 12:09:57 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/15 16:37:05 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdouble(double n, short size)
{
	int		tmp;
	short	i;

	if (size > 18)
		size = 18;
	i = 0;
	if ((int)n == 0 && n < 0)
		ft_putchar('-');
	ft_putnbr((int)n);
	tmp = (int)n;
	n = n - (double)tmp;
	if ((int)n != n)
		ft_putchar(',');
	while (i < size && (int)n != n)
	{
		n = n * 10;
		tmp = (int)n;
		n = n - (double)tmp;
		if (tmp < 0)
			tmp = -tmp;
		ft_putchar('0' + tmp);
		i++;
	}
}
