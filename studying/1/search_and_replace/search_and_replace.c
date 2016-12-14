/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:18:10 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 19:34:25 by jtrujill         ###   ########.fr       */
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
		ft_putchar(*str++);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	search_and_replace(char *str, char *search, char *re)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search[0])
			str[i] = re[0];
		i++;
	}
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1)
		ft_putchar('\n');
	else
		search_and_replace(argv[1], argv[2], argv[3]);
	return (0);
}
