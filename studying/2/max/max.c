/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:27:23 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/17 13:11:53 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	if (i == len)
		return (max);
	return (0);
}

int		main()
{
	int	balance[7] = {1000, 2, 3, 17, 50, 1345, 3};
	printf("%d", max(balance, 6));
	return (0);
}
