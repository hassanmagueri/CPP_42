CC		= c++ -Wall -Wextra -Werror 
SRC		= main.cpp Fixed.cpp Point.cpp bsq.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= fixed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all