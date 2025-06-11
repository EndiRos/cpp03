CX=g++
XXFLAGS = -Werror -Wextra _Wall -std=c++98 -g
INCLUDE = -I include
SRC = src/Claptrap.cpp src/main.cpp
OBJ = $(SRC=%.cpp:%.o)
NAME= claptrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CX) $(XXFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.cpp:%.o 
	$(CX) $(XXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)
	
fclean: clean
	rm -fr $(NAME)

re: fclean all