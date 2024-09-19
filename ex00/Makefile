CC		:= c++

NAME	:= megaphone

CFALGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= megaphone.cpp

OBJ		:= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY	: all clean fclean re