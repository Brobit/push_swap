# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 15:21:05 by almarico          #+#    #+#              #
#    Updated: 2024/01/21 11:05:49 by almarico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFT_COMPLETE = ./libft-complete/libft_complete.a

INCLUDES = -I ./Includes/

SRC = ./Sources/Error_handler/ft_convert_argv_to_str.c\
	  ./Sources/Error_handler/ft_check_duplication.c\
	  ./Sources/Error_handler/ft_convert_to_int.c\
	  ./Sources/Error_handler/ft_error_handler.c\
	  ./Sources/Error_handler/ft_check_tab.c\
	  ./Sources/Instructions/reverse_rotate_a.c\
	  ./Sources/Instructions/reverse_rotate_b.c\
	  ./Sources/Instructions/reverse_rotate_a_b.c\
	  ./Sources/Instructions/rotate_a.c\
	  ./Sources/Instructions/rotate_b.c\
	  ./Sources/Instructions/rotate_a_b.c\
	  ./Sources/Instructions/swap_a.c\
	  ./Sources/Instructions/swap_b.c\
	  ./Sources/Instructions/swap_a_b.c\
	  ./Sources/Instructions/push_a.c\
	  ./Sources/Instructions/push_b.c\
	  ./Sources/List/ft_convert_to_list.c\
	  ./Sources/Main/main.c


all : ${NAME}


${NAME} :
	${MAKE} -C $$(dirname ${LIBFT_COMPLETE})
	${CC} ${CFLAGS} ${LIBFT_COMPLETE} ${SRC} ${INCLUDES} -o $@


clean :
	${MAKE} clean -C $$(dirname ${LIBFT_COMPLETE})


fclean : clean
	${MAKE} fclean -C $$(dirname ${LIBFT_COMPLETE})
	${RM} ${NAME}


re : fclean all


.PHONY : all clean fclean re
