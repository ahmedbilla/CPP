SRCS = main.cpp  newZombie.cpp  randomChump.cpp  Zombie.cpp

OBJS = ${SRCS:.cpp=.o}
NAME = Zombie
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp Zombie.hpp
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all		

.PHONY: all clean fclean re