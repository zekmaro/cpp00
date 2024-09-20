CC		:= c++

NAME	:= phonebook


CFALGS	:= -Wall -Wextra -Werror -std=c++98

HEADERS	:= includes.hpp

SRC		:=	main.cpp \
			utils.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJ		:= $(SRC:%.cpp=%.o)

all: $(NAME) $(HEADERS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY	: all clean fclean re