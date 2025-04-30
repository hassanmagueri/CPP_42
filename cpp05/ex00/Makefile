CPP		= c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRC		= main.cpp Bureaucrat.cpp
OBJ		= $(SRC:.cpp=.o) 
HDR		= Bureaucrat.hpp
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