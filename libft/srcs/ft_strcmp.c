/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:54:54 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/02 19:00:43 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	if (s11 && s22)
	{
		while (s11[i] && s22[i] && (s11[i] == s22[i]))
			i++;
		return ((int)s11[i] - (int)s22[i]);
	}
	return (-1);
}
