NAME = rush00

RUSH = rush00.c

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
