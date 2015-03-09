/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:53:15 by bbecker           #+#    #+#             */
/*   Updated: 2015/01/08 13:22:06 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	size_t	len;
	size_t	i;

	ret = NULL;
	if (s1)
	{
		len = ft_strlen(s1);
		i = 0;
		if (n < len)
			len = n;
		ret = (char *)malloc(len + 1);
		bzero(ret, len + 1);
		if (!ret)
			return (NULL);
		while (i < len)
		{
			ret[i] = s1[i];
			i++;
		}
		ret[len] = '\0';
	}
	return (ret);
}
