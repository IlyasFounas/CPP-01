NAME = zombie

INCLUDES = includes
SRC = srcs/class/Zombie.cpp \
	  srcs/main.cpp \
	  srcs/newZombie.cpp \
	  srcs/randomChump.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

