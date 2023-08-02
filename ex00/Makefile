NAME = zombie


HEADERS=  Zombie.hpp


FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98


SRC = ./main.cpp ./Zombie.cpp ./randomChump.cpp ./newZombie.cpp


OBJ = $(SRC:.cpp=.o)

all : $(NAME) 


$(NAME): $(OBJ) $(HEADERS)
	$(FLAG) $(FLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp $(HEADERS)
	$(FLAG) $(FLAGS)   -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 