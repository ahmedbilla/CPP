# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 16:59:06 by ahbilla           #+#    #+#              #
#    Updated: 2025/11/26 22:24:24 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Animal
CPP = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CPP} ${CPPFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp Animal.hpp  Cat.hpp  Dog.hpp WrongAnimal.hpp WrongCat.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re