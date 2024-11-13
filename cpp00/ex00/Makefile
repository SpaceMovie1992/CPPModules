NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJS = megaphone.o

all: $(NAME)

$(NAME): megaphone.o
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re: fclean all