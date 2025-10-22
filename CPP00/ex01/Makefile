# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 15:12:40 by ahbilla           #+#    #+#              #
#    Updated: 2025/10/21 15:12:41 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Contact.cpp  HelperFunction.cpp  main.cpp  PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = phonebook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Contact.hpp  GlobalHeader.hpp  PhoneBook.hpp
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re
