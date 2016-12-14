/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:28:14 by jtrujill          #+#    #+#             */
/*   Updated: 2016/10/31 11:36:30 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_numbercheck(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] < 33 || str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			if (str[i] == '-')
				sign = -1;
		}
		i++;
	}
	while (ft_numbercheck(str[i]) == 1)
	{
		if (str[i] > 0)
			nbr = ((nbr) * 10) + (str[i] - '0') * sign;
		i++;
	}
	return (nbr);
}
