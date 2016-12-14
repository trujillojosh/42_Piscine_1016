/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:46:05 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/03 14:23:29 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*mem;

	i = 0;
	len = ft_strlen(src);
	mem = (char *)malloc(sizeof(*src) * (len + 1));
	while (src[i] != '\0')
	{
		mem[i] = src[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
