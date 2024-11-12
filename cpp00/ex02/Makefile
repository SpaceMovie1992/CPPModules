NAME = BankData
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS)

clean :
	rm -f $(OBJS)

fclean : 
	rm -f $(OBJS) $(NAME)

re: fclean all
