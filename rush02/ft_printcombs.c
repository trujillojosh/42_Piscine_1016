/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 01:35:57 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/13 01:53:32 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_x_rush.h"

void	ft_all_a(char *str)
{
	ft_display_rush02(str);
	ft_putstr(" || ");
	ft_display_rush03(str);
	ft_putstr(" || ");
	ft_display_rush04(str);
}

void	ft_rush2_4(char *str)
{
	ft_display_rush02(str);
	ft_putstr(" ||  ");
	ft_display_rush04(str);
}

void	ft_rush3_4(char *str)
{
	ft_display_rush03(str);
	ft_putstr(" || ");
	ft_display_rush04(str);
}

