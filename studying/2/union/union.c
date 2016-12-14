/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:29:27 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 21:30:31 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_stringmatch(char *str, char c, int i)
{
	int	a;

	a = 0;
	while (a < i)
	{
		if (str[a] == c)
			return (1);
		a++;
	}
	return (0);
}

int		ft_s1_match(char *s1, char c)
{
	while (*s1)
	{
		if (c == *s1)
			return (1);
		s1++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_stringmatch(s1, s1[i], i) == 0)
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (ft_s1_match(s1, s2[i]) == 0)
			if (ft_stringmatch(s2, s2[i], i) == 0)
				ft_putchar(s2[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_union(argv[1], argv[2]);
	return (0);
}
