/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:25:33 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/04 13:20:23 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *r;

	i = 0;
	if (min >= max)
	{
		r = 0;
		return (r);
	}
	r = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		r[i] = min;
		printf("%d", *r);
		min++;
		i++;
	}
	return (r);
}

int		main()
{
	printf("%d", *ft_range(5, 9));
}
