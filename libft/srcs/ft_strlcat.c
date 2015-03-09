/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:46:03 by bbecker           #+#    #+#             */
/*   Updated: 2015/01/04 12:20:48 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	if (dst && src)
	{
		ret = ft_strlen(src);
		i = 0;
		j = 0;
		while (dst[i] && i < size)
			++i;
		if (size > 0)
			while (i < size - 1 && src[j])
				dst[i++] = src[j++];
		if (j > 0)
		{
			dst[i] = 0;
			return (ret + i - j);
		}
		return (ret + i);
	}
	return (0);
}
