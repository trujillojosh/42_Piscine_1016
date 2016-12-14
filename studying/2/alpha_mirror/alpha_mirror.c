/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:40:51 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/17 12:25:53 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mirror_print(char c)
{
	char	a;
	int		i;

	if (c >= 'a' && c <= 'z')
		a = 'a';
	else
		a = 'A';
	i = 0;
	while (a < c)
	{
		i++;
		a++;
	}
	if (c >= 'a' && c <= 'z')
		a = 'z';
	else
		a = 'Z';
	while (i != 0)
	{
		a--;
		i--;
	}
	ft_putchar(a);
}
		
void	ft_alpha_mirror(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			ft_mirror_print(*str);
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_alpha_mirror(argv[1]);
	return (0);
}
