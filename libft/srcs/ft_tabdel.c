/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 13:08:00 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/15 16:38:12 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_tabdel(char ***tab)
{
	int i;

	i = 0;
	i = ft_tablen(*tab) - 2;
	while (i >= 0)
	{
		free(*tab[i]);
		i--;
	}
	free(*tab);
	*tab = NULL;
}
