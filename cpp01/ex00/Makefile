CC		= c++ -Wall -Wextra -Werror
SRC		= main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= zombie

all: $(NAME)

$(NAME): $(OBJ)
	echo ${OBJ}
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all