CC = cc

CFLAGS = -Wall -Wextra -Werror -pthread -fsanitize=thread -g

SRC = 	src/philosophers.c src/tools.c src/parsing/parsing.c src/parsing/ft_atol.c src/parsing/ft_isdigit.c \
		src/initialization.c

OBJ = $(SRC:.c=.o)

NAME = philo

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean