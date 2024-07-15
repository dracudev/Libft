LIB = ar
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libft.a
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

BONUS_SRC = $(wildcard bonus-src/*.c)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) rcs $(NAME) $(OBJ)

bonus: $(NAME) $(BONUS_OBJ)
	$(LIB) r $(NAME) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
