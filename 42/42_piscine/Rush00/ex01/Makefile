NAME = rush01

RUSH = rush01.c

MAIN = main.c

PUTCHAR = ft_putchar.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: clean $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(MAIN) $(RUSH) $(PUTCHAR)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean all
