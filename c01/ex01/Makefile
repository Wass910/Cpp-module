SRC=    Zombie.cpp ZombieHorde.cpp main.cpp\

OBJS			= $(SRC:.cpp=.o)

NAME			= zombie_horde

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

CC				= clang++

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean c.o re 