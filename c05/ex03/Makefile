SRC=   Bureaucrat.cpp intern.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp\

OBJS			= $(SRC:.cpp=.o)

NAME			= Form

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