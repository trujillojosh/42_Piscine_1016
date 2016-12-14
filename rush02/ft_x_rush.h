/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_rush.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:19:01 by jtrujill          #+#    #+#             */
/*   Updated: 2016/11/13 14:25:24 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_X_RUSH_H
# define FT_X_RUSH_H

# define BUFFER_SIZE 1

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	printlines(int x, char left, char middle, char right);
void	ft_putstr(char *str);
int		ft_numbercheck(char c);
int		ft_atoi(char *str);
void	ft_display_rush00(char *str);
void	ft_display_rush01(char *str);
void	ft_display_rush02(char *str);
void	ft_display_rush03(char *str);
void	ft_display_rush04(char *str);
void	ft_display_x(char *str);
void	ft_display_y(char *str);
void	ft_possible_match(char *str);
void	ft_putnbr(int nb);
int     ft_strlen(char *str);
void    ft_rush2_4(char *str);
void    ft_rush3_4(char *str);
void    ft_all_a(char *str);
int     ft_find_row(char *str);
int     ft_find_col(char *str);
char	ft_find_last(char *str);
<<<<<<< HEAD
char    *ft_rush_check_00(int x, int y);
char    *check_linestop(char *check, int x, int *i);
char    *check_linesmiddle(char *check, int x, int *i);
char    *check_linesbottom(char *check, int x, int *i);
=======
int		ft_cmp(char *s1, char *s2);
>>>>>>> 2c2d1e993b1cc7d3ed74243b8f6958cb3372dfcc

#endif

