/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:25:34 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 18:32:20 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_a(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		if (*str == 'a')
			a = 1;
		str++;
	}
	if (a == 1)
		ft_putchar('a');
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		ft_aff_a(argv[1]);
	return (0);
}
