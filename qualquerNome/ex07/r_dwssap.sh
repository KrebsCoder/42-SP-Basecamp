# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 16:05:06 by lkrebs-l          #+#    #+#              #
#    Updated: 2021/07/22 00:17:38 by lkrebs-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | awk -F: '{print $1}' | rev | sort -r | sed -n $FT_LINE1','$FT_LINE2'p' | paste -s -d ',' | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'