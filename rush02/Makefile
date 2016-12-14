# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 13:08:54 by jtrujill          #+#    #+#              #
#    Updated: 2016/11/12 13:44:24 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = ft_print_rush.c
SRC2 = ft_display_file.c ft_display_stats.c ft_printcombs.c rushcheck00.c readtest.c
INC = ft_x_rush.h
OFLAGS = gcc -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(OFLAGS) rush-00 -I $(INC) $(SRC) rush00.c
	$(OFLAGS) rush-01 -I $(INC) $(SRC) rush01.c
	$(OFLAGS) rush-02 -I $(INC) $(SRC) rush02.c
	$(OFLAGS) rush-03 -I $(INC) $(SRC) rush03.c
	$(OFLAGS) rush-04 -I $(INC) $(SRC) rush04.c
	$(OFLAGS) $(NAME) -I $(INC) $(SRC) $(SRC2)

clean:
	/bin/rm -f rush-00 rush-01 rush-02 rush-03 rush-04

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
