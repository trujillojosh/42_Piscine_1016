# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 13:16:06 by jtrujill          #+#    #+#              #
#    Updated: 2016/11/02 15:07:34 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o
