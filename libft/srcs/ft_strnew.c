/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:06:13 by bbecker           #+#    #+#             */
/*   Updated: 2015/01/04 12:16:31 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	return (str);
}
