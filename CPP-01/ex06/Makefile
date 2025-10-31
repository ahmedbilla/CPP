# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 16:02:53 by ahbilla           #+#    #+#              #
#    Updated: 2025/10/31 16:03:10 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Harl.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = harlFilter
CPP = c++
RM = rm -f
CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Harl.hpp
	${CPP} ${CPPCFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${CPPCFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re