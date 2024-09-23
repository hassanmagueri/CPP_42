CC		= c++ -std=c++98 -Wall -Wextra -Werror
SRC		= main.cpp PhoneBook.cpp Contact.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= phone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
