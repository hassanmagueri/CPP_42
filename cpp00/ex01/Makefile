CC		= c++ -std=c++98 -Wall -Wextra -Werror
SRC		= phone.cpp PhoneBook.cpp Contact.cpp
OBJ		= $(SRC:.cpp=.o)
NAME	= phone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
.o : .c
	$(CC) -c $@ -o $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
