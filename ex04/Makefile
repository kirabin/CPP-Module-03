NAME	=	a.out
COMPILER=	clang++
FLAGS	=	-Wall -Wextra -Werror
SRC		=	SuperTrap.cpp NinjaTrap.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp
INC		=	SuperTrap.hpp NinjaTrap.hpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(FLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f */*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
