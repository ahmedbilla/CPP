# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 16:51:36 by ahbilla           #+#    #+#              #
#    Updated: 2025/12/17 11:50:08 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp Intern.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Intern
CPP = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${CPPFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp  RobotomyRequestForm.hpp Intern.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re