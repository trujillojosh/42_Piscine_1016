/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 23:43:36 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/01 10:21:32 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != to_find[a] && str[i] != '\0')
	{
		i++;
		while (str[i] == to_find[a])
		{
			while (str[i++] == to_find[a++])
			{
				if (to_find[a] == '\0')
				{
					i = i - a;
					return (&str[i]);
				}
			}
		}
		a = 0;
	}
	return (0);
}
