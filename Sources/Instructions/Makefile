NAME = instructions.a

SRCS = ./push_a.c\
	   ./push_b.c\
	   ./swap_a.c\
	   ./swap_b.c\
	   ./swap_a_b.c\
	   ./rotate_a.c\
	   ./rotate_b.c\
	   ./rotate_a_b.c\
	   ./reverse_rotate_a.c\
	   ./reverse_rotate_b.c\
	   ./reverse_rotate_a_b.c

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
