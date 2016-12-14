/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:19:49 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/14 21:47:33 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_aff_a(char *str)
{
	int	i;
	int a;

	i = 0;
	a = 0;
	while  (str[i] != '\0')
	{
		if (str[i] == 'a')
			a = 1;
		i++;
	}
	if (a == 1)
	{
		ft_putchar('a');
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
	}
	else
	{
		ft_aff_a(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
