# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 20:33:13 by abelahce          #+#    #+#              #
#    Updated: 2023/03/03 02:19:16 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98


NAME=mutantstack

HDR= MutantStack.hpp

SRC := main.cpp	

OBJ := $(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all