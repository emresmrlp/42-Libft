NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs
SRC = $(shell find . -name "ft_*.c")
OBJ = $(SRC:.c=.o)

all: $(NAME)

${NAME}: ${OBJ}
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)	

re: fclean all

.PHONY: all clean fclean re