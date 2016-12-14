/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 15:34:15 by jtrujill          #+#    #+#             */
/*   Updated: 2016/10/30 15:34:17 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printlines(int x, char left, char middle, char right)
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
		printlines(x, 'A', 'B', 'A');
		ft_putchar('\n');
		y = y - 1;
	}
	while (y > 1)
	{
		printlines(x, 'B', ' ', 'B');
		ft_putchar('\n');
		y = y - 1;
	}
	if (y == 1)
	{
		printlines(x, 'C', 'B', 'C');
		ft_putchar('\n');
	}
}
