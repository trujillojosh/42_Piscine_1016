/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:51:23 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 20:37:59 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	while (*str != '\0' && (*str == ' ' || *str == '\t'))
			str++;
	while (*str != '\0' && *str != '\t' && *str != ' ')
	{
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
		ft_first_word(argv[1]);
	return (0);
}
