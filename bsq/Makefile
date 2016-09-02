# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 10:23:34 by tmckinno          #+#    #+#              #
#    Updated: 2016/08/30 18:00:08 by tmckinno         ###   ########.fr        #
#                                                                              #M
# **************************************************************************** #
-include make_srcs
NAME=bsq
HEADDIR=./include
CFLAGS=-Wall -Wextra -Werror -I$(HEADIR)


all: $(NAME) 

$(NAME): 
	gcc -I$(HEADDIR) -o $(NAME) $(SRC) 

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
