# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 10:23:34 by tmckinno          #+#    #+#              #
#    Updated: 2016/08/23 11:13:56 by tmckinno         ###   ########.fr        #
#                                                                              #M
# **************************************************************************** #

NAME=libft.a
SRCDIR=srcs/
HEADDIR=includes/
BASE=ft_putchar.c ft_strcmp.c ft_putstr.c ft_strlen.c ft_swap.c
SRC=$(addprefix $(SRCDIR),$(BASE))
OBJ=$(BASE:.c=.o)
CFLAGS=-Wall -Wextra -Werror


all: $(NAME) 

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

$(OBJ):
	gcc -c $(CFLAGS) -I$(HEADDIR) $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
