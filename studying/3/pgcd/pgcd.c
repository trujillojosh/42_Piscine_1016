/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:59:40 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/15 20:17:12 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_pgcd(int a, int b)
{
	int	i;

	i = 0;
	if (a < b)
		i = a;
	else
		i = b;
	while (i >= 0)
	{
		if ((a % i == 0))
				if ((b % i == 0))
					return (i);
		i--;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s", "\n");
	}
	else
	{
		printf("%d", ft_pgcd(atoi(argv[1]), atoi(argv[2])));
		printf("%s", "\n");
	}
	return (0);
}
