# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 15:21:05 by almarico          #+#    #+#              #
#    Updated: 2024/01/22 13:55:55 by almarico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_CHECKER = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFT_COMPLETE = ./libft-complete/libft_complete.a

INCLUDES = -I ./Includes/ft_push_swap.h

CHECKER_INCLUDES = -I ./Includes/checker.h

COMMON_SRC = ./Sources/Error_handler/ft_convert_argv_to_str.c\
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
	  ./Sources/List/ft_convert_to_list.c

PUSH_SWAP_SRC = ./Sources/Main/push_swap.c

CHECKER_SRC = ./Sources/Main/checker.c\
			  ./Sources/Stdin_listener/ft_stdin_listener.c

all : ${NAME}

bonus : ${NAME_CHECKER}

${NAME} : ${LIBFT_COMPLETE}
	${CC} ${CFLAGS} ${COMMON_SRC} ${PUSH_SWAP_SRC} ${LIBFT_COMPLETE} ${INCLUDES} -o $@

${NAME_CHECKER} : ${LIBFT_COMPLETE}
	${CC} ${CFLAGS} ${COMMON_SRC} ${CHECKER_SRC} ${LIBFT_COMPLETE} ${INCLUDES} -o $@

${LIBFT_COMPLETE} :
	${MAKE} -C $$(dirname ${LIBFT_COMPLETE})

clean :
	${MAKE} clean -C $$(dirname ${LIBFT_COMPLETE})

fclean : clean
	${MAKE} fclean -C $$(dirname ${LIBFT_COMPLETE})
	${RM} ${NAME}
	${RM} ${NAME_CHECKER}

re : fclean all

.PHONY : all bonus clean fclean re
