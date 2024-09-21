CC		= c++ -Wall -Wextra -Werror
SRC		= main.cpp Harl.cpp
OBJ		= $(SRC:.cpp=.o)
HDR		= Harl.hpp
NAME	= harlFilter

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