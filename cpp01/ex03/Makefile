CC		= c++ -Wall -Wextra -Werror
SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= main

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.o: .c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all