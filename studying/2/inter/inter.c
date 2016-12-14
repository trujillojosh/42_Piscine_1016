/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:29:26 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 23:15:40 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		dup_check(char *s1, char c, int i)
{
	int	a;

	a = 0;
	while (a < i)
	{
		if (c == s1[a])
			return (1);
		a++;
	}
	return (0);
}

int		match_check(char c, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (c == s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((match_check(s1[i], s2) == 0))
				if ((dup_check(s1, s1[i], i) == 0))
					ft_putchar(s1[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_inter(argv[1], argv[2]);
	return (0);
}
