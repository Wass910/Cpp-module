SRC=   Ice.cpp Cure.cpp main.cpp Materia.cpp Character.cpp \

OBJS			= $(SRC:.cpp=.o)

NAME			= Heal

CFLAGS			= -Wall -Wextra -Werror -std=c++98 -g

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