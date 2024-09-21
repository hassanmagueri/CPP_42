CC		= c++ -Wall -Wextra -Werror
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all