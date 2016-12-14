/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:46:41 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/03 19:12:07 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *begin;

	begin = "THE FOLLOWING TAKES PLACE BETWEEN ";
	if (hour >= 1 && hour <= 10)
		printf("%s%d.00 A.M. AND %d.00 A.M.\n", begin, hour, hour + 1);
	else if (hour == 11)
		printf("%s%d.00 A.M. AND %d.00 P.M.\n", begin, hour, hour + 1);
	else if (hour == 12)
		printf("%s%d.00 P.M. AND %d.00 P.M.\n", begin, hour, hour - 11);
	else if (hour >= 13 && hour <= 22)
		printf("%s%d.00 P.M. AND %d.00 P.M.\n", begin, hour - 12, hour - 11);
	else if (hour == 23)
		printf("%s%d.00 P.M. AND %d.00 A.M.\n", begin, hour - 12, hour - 11);
	else if (hour == 24)
		printf("%s%d.00 A.M. AND %d.00 A.M.\n", begin, hour - 12, hour - 23);
	else if (hour == 0)
		printf("%s%d.00 A.M. AND %d.00 A.M.\n", begin, hour + 12, hour + 1);
	else
		printf("%s", "Error, not a valid time.\n");
}
