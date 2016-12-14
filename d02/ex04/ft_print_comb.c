/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 13:36:59 by jtrujill          #+#    #+#             */
/*   Updated: 2016/10/27 13:47:24 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_superputchar(char h, char t, char o)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(o);
	if (h == '7')
	{
		ft_putchar('\n');
	}
	else if (h != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char h;
	char t;
	char o;

	o = '2';
	t = '1';
	h = '0';
	while (h <= '7')
	{
		if ((h < t) && (t < o))
		{
			ft_superputchar(h, t, o);
		}
		if (o++ >= '9')
		{
			o = '0';
			t++;
		}
		if (t > '9')
		{
			t = '0';
			h++;
		}
	}
}
