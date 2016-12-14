/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:32:15 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/17 20:49:55 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_do_op(int a, char o, int b)
{
	if (o == '+')
		return (a + b);
	else if (o == '-')
		return (a - b);
	else if (o == '/')
		return (a / b);
	else if (o == '*')
		return (a * b);
	else if (o == '%')
		return (a % b);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else
	{
		printf("%d", ft_do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
		printf("%s", "\n");
	}
	return (0);
}
