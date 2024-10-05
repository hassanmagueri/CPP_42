# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 11:26:37 by emagueri          #+#    #+#              #
#    Updated: 2024/10/04 15:56:44 by emagueri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		= c++ -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ		= $(SRC:.cpp=.o)
HDR		= AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
NAME	= main

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CPP) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all