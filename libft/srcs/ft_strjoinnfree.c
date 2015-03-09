/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinnfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 11:41:44 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/01 17:08:22 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinnfree(char *s1, char *s2)
{
	size_t	b;
	size_t	c;
	char	*data;
	size_t	d;

	b = ft_strlen (s1);
	c = ft_strlen (s2);
	data = (char *)ft_memalloc(sizeof(char) * (b + c + 1));
	d = 0;
	while (d < b && s1[d])
		data[d] = s1[d], d++;
	d = 0;
	while (d < c && s2[d])
		data[d + b] = s2[d], d++;
	data[b + c + 1] = '\0';
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (data);
}
