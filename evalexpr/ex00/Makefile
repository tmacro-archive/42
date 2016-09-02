# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 10:23:34 by tmckinno          #+#    #+#              #
#    Updated: 2016/08/28 23:19:38 by tmckinno         ###   ########.fr        #
#                                                                              #M
# **************************************************************************** #

-include make_srcs
NAME=eval_expr
HEADDIR=./
CFLAGS=-Wall -Wextra -Werror -I$(HEADIR)


all: $(NAME) 

$(NAME): 
	gcc -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
