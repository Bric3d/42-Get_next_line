/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memallocpp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 16:31:09 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/15 16:36:53 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memallocpp(size_t size, void (*f)(char *, int, char *))
{
	void *ret;

	ret = NULL;
	ret = (void *)(malloc(sizeof(void *) * size + 1));
	if (ret == NULL)
	{
		(*f)("fractol", 0, "Malloc");
		exit(-1);
	}
	ft_bzero(ret, size);
	return (ret);
}
