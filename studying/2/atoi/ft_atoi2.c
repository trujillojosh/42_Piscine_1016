/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:56:03 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 13:29:33 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int	sign;
	int nb;

	sign = 1;
	nb = 0;
	if (*str < 33)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0') * sign;
		str++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("%s", "WRONG");
	else
		printf("%d", ft_atoi(argv[1]));
	return (0);
}
