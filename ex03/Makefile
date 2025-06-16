CX=g++
XXFLAGS = -Werror -Wextra -Wall -g
INCLUDE = -I include
SRC = src/ClapTrap.cpp src/main.cpp src/FragTrap.cpp src/ScavTrap.cpp src/Diamondtrap.cpp
OBJ = $(SRC:%.cpp=%.o)
NAME= DiamondTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CX) $(XXFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CX) $(XXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)
	
fclean: clean
	rm -fr $(NAME)

re: fclean all