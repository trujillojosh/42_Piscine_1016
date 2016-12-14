/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 18:24:18 by jtrujill          #+#    #+#             */
/*   Updated: 2016/10/27 13:58:21 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr2(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr2(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbra(int a)
{
	if (a < 10)
	{
		ft_putnbr2(0);
		ft_putnbr2(a);
	}
	else
	{
		ft_putnbr2(a);
	}
}

void	ft_putnbrb(int b)
{
	if (b < 10)
	{
		ft_putnbr2(0);
		ft_putnbr2(b);
	}
	else
	{
		ft_putnbr2(b);
	}
}

void	ft_putcharformat(int a, int b)
{
	ft_putnbra(a);
	ft_putchar(' ');
	ft_putnbrb(b);
	if (a == 98 && b == 99)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		if (b <= 99)
		{
			ft_putcharformat(a, b);
			b++;
		}
		else
		{
			a++;
			b = a + 1;
		}
	}
}
