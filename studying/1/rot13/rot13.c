/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:49:14 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/14 21:58:27 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'n') || (str[i] >= 'A' && str[i] <= 'N'))
	{
		ft_putchar((str[i] + 13));
	}
	if ((str[i] >= 'M' && str[i] <= 'Z') || (str[i] >= 'M' && str[i] <= 'Z'))
	{
		ft_putchar((str[i] - 13));
	}
	else
	{
		ft_putchar(str[i]);
	}
	i++;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
		ft_rot_13(argv[1]);
	return (0);
}

