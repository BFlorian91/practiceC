# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 18:19:41 by ravernhe          #+#    #+#              #
#    Updated: 2018/08/19 21:27:31 by ravernhe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = scrs/main.c scrs/ft_compar.c scrs/ft_basic.c scrs/ft_display.c \
		scrs/ft_rush00.c scrs/ft_rush01.c scrs/ft_rush02.c \
		scrs/ft_rush03.c scrs/ft_rush04.c

O = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(O)
	@$(CC) -o $(NAME) $(O)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
