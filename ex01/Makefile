CC		:= c++

NAME	:= phonebook

CFALGS	:= -Wall -Wextra -Werror -std=c++98

HEADERS	:= includes.hpp

OBJDIR	:= obj

SRC		:=	main.cpp \
			utils.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJ		:= $(SRC:%.cpp=$(OBJDIR)/%.o)

$(shell mkdir -p $(OBJDIR))

all: $(NAME) $(HEADERS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

$(OBJDIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY	: all clean fclean re