/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:30:13 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/03 18:30:40 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	while (i < argc)
	{
		length = length + ft_strlen(argv[i] + 1);
		i++;
	}
	b = ((char *)malloc(sizeof(char) * (length)) + i);
	while (count < argc)
	{
		str = argv[z][count];
		results = results + str;
		count++;
		z++;
	}
	return (results);
}
