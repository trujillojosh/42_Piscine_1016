/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:46:35 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/05 10:55:30 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'j') ||
				(str[i] >= 'A' && str[i] <= 'J'))
		{
			str[i] = str[i] + 16;
		}
		else if ((str[i] >= 'k' && str[i] <= 'z') ||
				(str[i] >= 'K' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 10;
		}
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("%s", "Error");
	else
		printf("%s", ft_rot42(argv[1]));
}
