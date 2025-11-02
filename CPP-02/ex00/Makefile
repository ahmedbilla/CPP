# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 21:56:21 by ahbilla           #+#    #+#              #
#    Updated: 2025/11/02 23:49:38 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Fixed.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = fixed
CPP = c++
RM = rm -f
CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Fixed.hpp
	${CPP} ${CPPCFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${CPPCFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re