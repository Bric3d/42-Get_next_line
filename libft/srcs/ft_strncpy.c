/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:06:53 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/02 19:41:33 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n && src[c])
	{
		dst[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dst[c] = '\0';
		c++;
	}
	return (dst);
}
