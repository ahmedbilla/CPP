# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 18:10:00 by ahbilla           #+#    #+#              #
#    Updated: 2025/10/28 18:10:01 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp  newZombie.cpp  randomChump.cpp  Zombie.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Zombie
CPP = c++
RM = rm -f
CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Zombie.hpp
	${CPP} ${CPPCFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${CPPCFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re