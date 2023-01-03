NAME = Poly

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp	Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all