NAME = sudoku

RUSH = rush01.c

MAIN = main.c

FUNC = checking.c solving.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME):
		$(CC) -o $(NAME) $(CFLAGS) $(MAIN) $(RUSH) $(FUNC)

clean:
		/bin/rm -f $(NAME)

fclean: clean

re: fclean all
