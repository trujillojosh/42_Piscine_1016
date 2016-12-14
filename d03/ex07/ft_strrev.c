/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:50:51 by jtrujill          #+#    #+#             */
/*   Updated: 2016/10/28 22:57:43 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	swap;
	int	a;
	int	i;

	a = *str;
	while (str[a] != '\0')
		i++;
	i = i - 1;
	while (a < i)
	{
		swap = str[a];
		str[a] = str[i - 1];
		str[i - 1] = swap;
	}
	a++;
	i--;
	return (str);
}
