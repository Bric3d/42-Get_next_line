/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 11:06:50 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/04 15:21:43 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnstr(char *str, int n)
{
	int i;

	if (str)
	{
		i = ft_strlen(str);
		if (i < n)
			i = n;
		write(1, str, i);
	}
}
