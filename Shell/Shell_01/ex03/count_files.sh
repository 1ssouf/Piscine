# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialousse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 19:11:00 by ialousse          #+#    #+#              #
#    Updated: 2022/03/13 19:27:59 by ialousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
find . -type f -o -type d | wc -l | tr -d ' *'