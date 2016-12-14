/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:59:29 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/15 21:22:38 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_rot13(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
		{
			ft_putchar((*str) + 13);
			str++;
		}
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
		{
			ft_putchar((*str) - 13);
			str++;
		}
		else
		{
			ft_putchar((*str));
			str++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("WRONG");
	}
	else
		ft_rot13(argv[1]);
	return (0);
}
