/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 22:12:18 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/01 22:31:54 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (str[i] > 96 && str[i] < 123)
			{
				if ((str[i - 1] < 65 && str[i - 1] > 57) || str[i] > 122 ||
					str[i - 1] < 48 || (str[i - 1] > 90 && str[i - 1] < 97))
					str[i] = str[i] - 32;
			}
			if (str[i] > 64 && str[i] < 91)
			{
				if ((str[i - 1] < 65 && str[i - 1] > 57) || str[i] > 122 ||
					str[i - 1] < 48 || (str[i - 1] > 90 && str[i - 1] < 97))
					str[i] = str[i];
				else
					str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
