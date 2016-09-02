# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 10:23:34 by tmckinno          #+#    #+#              #
#    Updated: 2016/08/23 21:28:08 by tmckinno         ###   ########.fr        #
#                                                                              #M
# **************************************************************************** #

NAME="do-op"
SRCDIR="./"
HEADDIR="./"
SRC=main.c math.c io.c string.c
CLEANUP=do-op
CFLAGS=-Wall -Wextra -Werror


all: $(NAME) 

$(NAME):
	@gcc $(CFLAGS) -o $(NAME) -I$(HEADDIR) $(SRC)

clean:
	@rm -f $(CLEANUP)

