CX=g++
XXFLAGS = -Werror -Wextra -Wall -std=c++98
INCLUDE = -I include
SRC = src/ClapTrap.cpp src/main.cpp
OBJ = $(SRC:%.cpp=%.o)
NAME= claptrap

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