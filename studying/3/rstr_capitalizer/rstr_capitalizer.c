/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:41:47 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 17:11:37 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	ft_putchar(c);
}

void	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	ft_putchar(c);
}
		
void	ft_rstr_capitalizer(char *str)
{
	char next;

	next = *(str + 1);
	while (*str)
	{
		next = *(str + 1);
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (next < 33) 
				ft_uppercase(*str);
			else
				ft_lowercase(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		ft_putchar('\n');
	while (i < argc)
	{
		ft_rstr_capitalizer(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
