/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:56:38 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/17 21:08:04 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char *mem;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	mem = (char *)malloc(sizeof(char) * (len - 1));
	while (str[i] != '\0')
	{
		mem[i] = str[i];
		i++;
	}
	return(mem);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_putstr(ft_strdup(argv[1]));
	return (0);
}
