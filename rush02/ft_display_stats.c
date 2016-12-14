/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stats.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 00:41:37 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/13 00:48:04 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_x_rush.h"

void	ft_display_x(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\n')
	{
		x++;
		i++;
	}
	ft_putnbr(x);
}

void	ft_display_y(char *str)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y++;
		}
		i++;
	}
	ft_putnbr(y);
}
