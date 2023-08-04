NAME = Brain





FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98


SRC = ./main.cpp 


OBJ = $(SRC:.cpp=.o)

all : $(NAME) 


$(NAME): $(OBJ) 
	$(FLAG) $(FLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp 
	$(FLAG) $(FLAGS)   -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 