NAME = gnl.a
SRCS = get_next_line.c\
	   get_next_line_utils.c\
	   get_next_line_bonus.c\
	   get_next_line_utils_bonus.c

OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all : ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -Iincludes -c $< -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
