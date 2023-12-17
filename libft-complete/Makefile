NAME = libft_complete.a
LIB_GNL = get_next_line/gnl.a
LIB = printf/libftprintf.a

all : ${NAME}

${NAME} : ${LIB_GNL} ${LIB}
	echo "CREATE ${NAME}\nADDLIB ${LIB_GNL}\nADDLIB ${LIB}\nSAVE\nEND" | ar -M

${LIB_GNL} :
	${MAKE} -C $$(dirname $@)


${LIB} :
	${MAKE} -C $$(dirname $@)

clean :
	${MAKE} clean -C $$(dirname ${LIB});
	$(MAKE) clean -C $$(dirname ${LIB_GNL});

fclean : clean
	${RM} ${LIB} ${LIB_GNL} ${NAME}

re : fclean all

.PHONY : all clean fclean re
