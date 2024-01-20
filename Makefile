# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 15:21:05 by almarico          #+#    #+#              #
#    Updated: 2024/01/20 13:50:24 by almarico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT_COMPLETE = ./libft-complete/libft_complete.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I ./Includes/
SRC = ./Sources/Error_handler/ft_check_tab.c\
	  ./Sources/Error_handler/ft_error_handler.c\
	  ./Sources/Error_handler/ft_convert_to_int.c\
	  ./Sources/Error_handler/ft_check_duplication.c\
	  ./Sources/Error_handler/ft_convert_argv_to_str.c\
	  ./Sources/Instructions/push_a.c\
	  ./Sources/Instructions/push_b.c\
	  ./Sources/Instructions/swap_a.c\
	  ./Sources/Instructions/swap_b.c\
	  ./Sources/Instructions/swap_a_b.c\
	  ./Sources/Instructions/rotate_a.c\
	  ./Sources/Instructions/rotate_b.c\
	  ./Sources/Instructions/rotate_a_b.c\
	  ./Sources/Instructions/reverse_rotate_a.c\
	  ./Sources/Instructions/reverse_rotate_b.c\
	  ./Sources/Instructions/reverse_rotate_a_b.c\
	  ./Sources/List/ft_convert_to_list.c\
	  ./Sources/main.c

OBJ_PATH = obj/

OBJ = ${addprefix ${OBJ_PATH}, ${SRC:.c=.o}}

all : ${OBJ_PATH} ${NAME}

${OBJ_PATH} :
	mkdir ${OBJ_PATH}

${NAME} : ${OBJ}
	${MAKE} -C $$(dirname ${LIBFT_COMPLETE})
	${CC} ${CFLAGS} ${OBJ} ${LIBFT_COMPLETE} ${INCLUDES} -o $@

${OBJ_PATH}%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

clean :
	${MAKE} clean -C $$(dirname ${LIBFT_COMPLETE})
	${RM} -f ${OBJ}
	${RM} -rf ${OBJ_PATH}

fclean : clean
	${MAKE} fclean -C $$(dirname ${LIBFT_COMPLETE})
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
