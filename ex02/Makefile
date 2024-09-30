# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarama <anarama@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 20:23:54 by anarama           #+#    #+#              #
#    Updated: 2024/09/30 13:35:58 by anarama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++

NAME	:= account

CFLAGS	:= -Wall -Wextra -Werror -std=c++98 -g

OBJDIR	:= obj

HEADERS	:=	Account.hpp

SRC		:=	tests.cpp Account.cpp

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