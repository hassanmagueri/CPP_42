CC		= c++ -Wall -Wextra -Werror -std=c++98
SRC		= File.cpp main.cpp
OBJ		= $(SRC:.cpp=.o) 
NAME	= main

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