# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 04:51:51 by lkrebs-l          #+#    #+#              #
#    Updated: 2021/07/21 16:06:27 by lkrebs-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep ether | awk '{print $2}'