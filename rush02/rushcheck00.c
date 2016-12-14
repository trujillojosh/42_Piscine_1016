/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushcheck00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:15:41 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/13 14:15:45 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_x_rush.h"

char	*check_linestop(char *check, int x, int *i)
{
	int j;

	j = *i;
	if (x > 0)
	{
		check[j] = 'o';
		x = x - 1;
		j++;
	}
	while (x > 1)
	{
		check[j] = '-';
		x = x - 1;
		j++;
	}
	if (x == 1)
	{
		check[j] = 'o';
		j++;
	}
	check[j++] = '\n';
	i += j;
	return (check);
}

char	*check_linesmiddle(char *check, int x, int *i)
{
	int j;

	j = *i;
	if (x > 0)
	{
		check[j] = '|';
		x = x - 1;
		j++;
	}
	while (x > 1)
	{
		check[j] = ' ';
		x = x - 1;
		j++;
	}
	if (x == 1)
	{
		check[j] = '|';
		j++;
	}
	check[j++] = '\n';
	i += j;
	return (check);
}

char	*check_linesbottom(char *check, int x, int *i)
{
	int j;

	j = *i;
	if (x > 0)
	{
		check[j] = 'o';
		x = x - 1;
		j++;
	}
	while (x > 1)
	{
		check[j] = '-';
		x = x - 1;
		j++;
	}
	if (x == 1)
	{
		check[j] = 'o';
		j++;
	}
	check[j++] = '\n';
	i += j;
	return (check);
}

char	*ft_rush_check_00(int x, int y)
{
	int		i;
	char	*check;

	i = 0;
	check = (char *)malloc(sizeof(char) * (y + 1) * x + 1);
	if (y <= 0 || x <= 0)
		return (0);
	if (y > 0)
	{
		check[i] = *check_linestop(check, x, &i);
		i += x + 1;
		y = y - 1;
	}
	while (y > 1)
	{
		check[i] = *check_linesmiddle(check, x, &i);
		i += x + 1;
		y = y - 1;
	}
	if (y == 1)
	{
		check[i] = *check_linesbottom(check, x, &i);
		i += x + 1;
	}
	return (check);
}

int		main(void) //using this main to check why first characters in middle rows are being replaced
{
	printf("%s", ft_rush_check_00(4, 4));
	return (0);
}
