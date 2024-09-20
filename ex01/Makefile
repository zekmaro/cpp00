CC		:= c++

NAME	:= phonebook

CFALGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:=	phonebook.cpp \
			Contact.cpp

OBJ		:= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY	: all clean fclean re