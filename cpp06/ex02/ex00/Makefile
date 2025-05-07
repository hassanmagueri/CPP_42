# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 11:26:37 by emagueri          #+#    #+#              #
#    Updated: 2024/10/09 09:58:08 by emagueri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		= c++ -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp ScalarConverter.cpp types.cpp
OBJ		= $(SRC:.cpp=.o) 
HDR		= ScalarConverter.hpp
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