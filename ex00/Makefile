# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 14:59:15 by ocviller          #+#    #+#              #
#    Updated: 2025/12/12 15:14:48 by ocviller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = megaphone
SRC = megaphone.cpp
OBJ = megaphone.o
OPTIONS = -o $(NAME)

all: $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) $(OPTIONS)

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re