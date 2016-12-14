# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bon.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/26 23:18:06 by jtrujill          #+#    #+#              #
#    Updated: 2016/10/26 23:18:27 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

ldapsearch -Q cn="*bon*" | grep 'dn' | wc -l | tr -d ' '