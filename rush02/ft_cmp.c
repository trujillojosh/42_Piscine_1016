/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:17:35 by mikim             #+#    #+#             */
/*   Updated: 2016/11/13 14:24:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_x_rush.h"

int		ft_cmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}
