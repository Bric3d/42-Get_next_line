/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:42:59 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/03 10:27:12 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	if (s1)
		while (i < n)
		{
			if (s1[i] == (unsigned char)c)
				return (&s1[i]);
			i++;
		}
	return (NULL);
}
