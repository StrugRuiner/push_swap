NAME = push-swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = push_swap.c operation.c validator.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o &(NAME) &(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
