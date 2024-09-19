CC		= c++ -std=c++98 -Wall -Wextra -Werror
SRC		= Account.cpp tests.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= account

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.o: .cpp
	$(CC) -c $@ -o $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
