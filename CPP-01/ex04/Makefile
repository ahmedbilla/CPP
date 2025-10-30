# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 11:01:50 by ahbilla           #+#    #+#              #
#    Updated: 2025/10/30 11:22:57 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp HelperFunction.cpp Sed.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Sed
CPP = c++
RM = rm -f
CPPCFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Sed.hpp
	${CPP} ${CPPCFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CPP} ${CPPCFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re