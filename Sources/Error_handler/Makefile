NAME = error_handler.a

SRCS = ./ft_check_tab.c\
	   ./ft_error_handler.c\
	   ./ft_convert_to_int.c\
	   ./ft_check_duplication.c\
	   ./ft_convert_argv_to_str.c

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
