/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:58:42 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 19:11:52 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_alpha_place(char c)
{
	int	i;
	char a;

	i = 0;
	a  = 'a';
	if (c >= 'A' && c <= 'Z')
		a = 'A';
	while (a != c)
	{
		i++;
		a++;
	}
	return (i);
}

void	ft_repeat_alpha(char *str)
{
	int	r;

	r = 0;
	while (*str)
	{
		while(r <=  ft_alpha_place(*str))
		{
			ft_putchar(*str);
			r++;
		}
		r = 0;
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_repeat_alpha(argv[1]);
	return (0);
}
