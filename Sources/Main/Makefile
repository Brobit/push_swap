NAME = main.a

SRCS = ./main.c

OBJ_PATH = obj/

OBJS = ${addprefix ${OBJ_PATH}, ${SRCS:.c=.o}}

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

INCLUDES = -I ../../Includes/

all : ${OBJ_PATH} ${NAME}

${OBJ_PATH} :
	mkdir ${OBJ_PATH}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

${OBJ_PATH}%.o : %.c
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

clean :
	rm -rf ${OBJS}
	rm -rf ${OBJ_PATH}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
