/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:39:55 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/16 18:40:48 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write (1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
