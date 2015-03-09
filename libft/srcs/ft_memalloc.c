/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:24:39 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/02 15:46:54 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*memory;

	if (!size)
		return (NULL);
	memory = (void *)malloc(size);
	if (memory == NULL)
		return (NULL);
	bzero(memory, size);
	return (memory);
}
