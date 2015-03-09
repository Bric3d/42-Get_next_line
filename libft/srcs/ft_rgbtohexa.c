/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbtohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 10:48:22 by bbecker           #+#    #+#             */
/*   Updated: 2015/02/15 16:37:28 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rgbtohexa(float r, float g, float b)
{
	return (0xFF & (int)r) << 16 | (0xFF & (int)g) << 8 | (0xFF & (int)b);
}
