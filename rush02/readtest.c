/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:35:38 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/12 23:44:51 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_x_rush.h"

void	ft_possible_match(char *str)
{
	int	i;

	i = 0;
    ft_putstr(str);
	if ((str[0] == 'o') || (str[0] == '/'))
	{
		if (str[0] == 'o')
			ft_display_rush00(str);
		if (str[0] == '/')
			ft_display_rush01(str);
	}
	else if ((str[0] == 'A') && (ft_strlen(str) == 2))
		ft_all_a(str);
	else if (((str[ft_strlen(str) - 2]) == 'C') && (ft_find_row(str) == 1))
		ft_rush2_4(str);
	else if (((str[ft_strlen(str) - 2]) == 'C') && (ft_find_col(str) == 1))
		ft_rush3_4(str);
	else if (str[ft_find_row(str) - 1] == 'A')
		ft_display_rush02(str);
	else if (str[ft_strlen(str) - 2] == 'A')
		ft_display_rush04(str);
	else if (((str[ft_strlen(str) - 2]) = 'C'))
		ft_display_rush03(str);
	else
		ft_putstr(str);
	ft_putchar('\n');
}

int		main(void)
{
	int		count;
	int		ret;
	char	*mem;
	char	buf[BUFFER_SIZE + 1];

	count = 0;
	mem = (char *)malloc(BUFFER_SIZE);
	while ((ret = read(0, buf, BUFFER_SIZE)))
	{
		buf[ret] = '\0';
		mem[count] = buf[0];
		count++;
	}
	mem[count] = '\0';
	ft_possible_match(mem);
	return (0);
}
