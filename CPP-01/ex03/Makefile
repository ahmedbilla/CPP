# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 21:58:56 by ahbilla           #+#    #+#              #
#    Updated: 2025/10/28 22:11:09 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Weapon
CPP = c++
RM = rm -f
CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp Weapon.h
	${CPP} ${CPPCFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${CPPCFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re