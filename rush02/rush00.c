/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 23:23:48 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/12 16:10:51 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_x_rush.h"

void	printlines_original(int x, char left, char middle, char right)
{
	if (x > 0)
	{
		ft_putchar(left);
		x = x - 1;
	}
	while (x > 1)
	{
		ft_putchar(middle);
		x = x - 1;
	}
	if (x == 1)
	{
		ft_putchar(right);
	}
}

void	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		return ;
	}
	if (y > 0)
	{
		printlines(x, '/', '*', '\\');
		ft_putchar('\n');
		y = y - 1;
	}
	while (y > 1)
	{
		printlines(x, '*', ' ', '*');
		ft_putchar('\n');
		y = y - 1;
	}
	if (y == 1)
	{
		printlines(x, '\\', '*', '/');
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("Error");
	}
	else
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
