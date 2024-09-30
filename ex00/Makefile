# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarama <anarama@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 20:22:50 by anarama           #+#    #+#              #
#    Updated: 2024/09/30 14:41:51 by anarama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++

NAME	:= megaphone

CFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= megaphone.cpp

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