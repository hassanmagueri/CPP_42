CPP		= c++ -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp Bureaucrat.cpp Form.cpp
OBJ		= $(SRC:.cpp=.o) 
HDR		= Bureaucrat.hpp Form.hpp
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