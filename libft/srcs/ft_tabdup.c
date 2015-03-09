/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:30:05 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/03 12:39:29 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabdup(char **tab)
{
	char	**ev;
	int		i;

	i = 0;
	while (tab[i])
		i++;
	ev = (char **)ft_memalloc(sizeof(char *) * i + 1);
	i = 0;
	while (tab[i])
	{
		ev[i] = ft_strdup(tab[i]);
		i++;
	}
	ev[i] = '\0';
	return (ev);
}
