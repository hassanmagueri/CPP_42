CC		= c++ -Wall -Wextra -Werror
SRC		= main.cpp Fixed.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= fixed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all