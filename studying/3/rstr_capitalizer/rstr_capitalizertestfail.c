/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 21:10:36 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 21:56:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printcap(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(c);
	else
		ft_putchar((c - 32));
}

void	ft_printlow(char c)
{
	if (c >= 'a' && c <= 'z')
		ft_putchar(c);
	else
		ft_putchar((c + 32));
}

void	ft_lastcapital(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{ 
			if ((str[i + 1] == '\0') || (str[i + 1] == '\t') || \
					(str[i + 1] == ' ') || (str[i - 1] == '\0'))
			{
				if ((str[i + 1] == ' ') || str[i + 1] == '\0')
					ft_printcap(str[i]);
				else
					ft_printlow(str[i]);
			}
			else
				ft_printlow(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argc)
		{
			ft_lastcapital(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
