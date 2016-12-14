/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:43:11 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/03 16:35:53 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *r;
	int mini;

	i = 0;
	mini = min;
	if (min >= max)
	{
		r = 0;
		return (0);
	}
	r = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = r;
	return (max - mini);
}
