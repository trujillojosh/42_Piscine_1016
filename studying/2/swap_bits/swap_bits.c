/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:31:06 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/18 09:09:58 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet >> 4 | octet << 4);
	return (octet);
}

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if ((octet & i) == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i = i / 2;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
	octet = ((octet & 0xCC) >> 2 | (octet & 0x33) << 2);
	octet = ((octet & 0xAA) >> 1 | (octet & 0x55) << 1);
	return(octet);
}


