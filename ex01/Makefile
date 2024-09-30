# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarama <anarama@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 20:22:31 by anarama           #+#    #+#              #
#    Updated: 2024/09/30 13:37:57 by anarama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++

NAME	:= phonebook

CFLAGS	:= -Wall -Wextra -Werror -std=c++98

OBJDIR	:= obj

HEADERS	:=	includes.hpp \
			Contact.hpp \
			PhoneBook.hpp \

SRC		:=	main.cpp \
			utils.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJ		:= $(SRC:%.cpp=$(OBJDIR)/%.o)

$(shell mkdir -p $(OBJDIR))

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

$(OBJDIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY	: all clean fclean re