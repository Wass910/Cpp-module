SRC=   FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp\

OBJS			= $(SRC:.cpp=.o)

NAME			= FragTrap

CFLAGS			= -Wall -Wextra -Werror -std=c++98

RM				= rm -f

CC				= clang++

%.o : %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean c.o re 