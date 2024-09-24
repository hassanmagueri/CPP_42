# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 12:49:31 by emagueri          #+#    #+#              #
#    Updated: 2024/09/24 12:53:38 by emagueri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp ClapTrap.cpp
OBJ		= $(SRC:.cpp=.o)
HDR		= ClapTrap.hpp
NAME	= main

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all