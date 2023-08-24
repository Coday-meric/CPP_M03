NAME = FragTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAG = -Wall -Werror -Wextra

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME):	$(OBJ)
		c++ $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean all