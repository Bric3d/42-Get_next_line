/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:19:21 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/15 13:08:18 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	b;
	size_t	c;
	char	*data;
	size_t	d;

	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen(s1);
	c = ft_strlen(s2);
	data = (char *)ft_memalloc(sizeof(char *) * (b + c + 1));
	d = 0;
	while (s1 && d < b)
	{
		data[d] = s1[d];
		d++;
	}
	d = 0;
	while (s2 && d < c)
	{
		data[d + b] = s2[d];
		d++;
	}
	data[b + c + 1] = '\0';
	return (data);
}
