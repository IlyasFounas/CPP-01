NAME = harl2.0

INCLUDES = includes
SRC = srcs/main.cpp \
	  srcs/class/Harl.cpp

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
