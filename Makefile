# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 15:21:05 by almarico          #+#    #+#              #
#    Updated: 2024/01/20 14:16:21 by almarico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_COMPLETE = ./libft-complete/libft_complete.a
SRC = ./Sources/sources.a
INCLUDES = -I ./Includes/


all : ${NAME}

${NAME} :
	${MAKE} -C $$(dirname ${LIBFT_COMPLETE})
	${MAKE} -C $$(dirname ${SRC})
	${CC} ${CFLAGS} ${LIBFT_COMPLETE} ${SRC} ${INCLUDES} -o $@

clean :
	${MAKE} clean -C $$(dirname ${LIBFT_COMPLETE})
	${MAKE} clean -C $$(dirname ${SRC})

fclean : clean
	${MAKE} fclean -C $$(dirname ${LIBFT_COMPLETE})
	${MAKE} fclean -C $$(dirname ${SRC})
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
