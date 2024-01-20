NAME = sources.a
ERROR_HANDLER = ./Error_handler/error_handler.a
INSTRUCTIONS = ./Instructions/instructions.a
LIST = ./List/list.a

all : ${NAME}

${NAME} : ${ERROR_HANDLER} ${INSTRUCTIONS} ${LIST}
	echo "CREATE ${NAME}\nADDLIB ${ERROR_HANDLER}\nADDLIB ${INSTRUCTIONS}\nADDLIB ${LIST}\nSAVE\nEND" | ar -M

${ERROR_HANDLER} :
	${MAKE} -C $$(dirname $@)

${INSTRUCTIONS} :
	${MAKE} -C $$(dirname $@)

${LIST} :
	${MAKE} -C $$(dirname $@)

clean :
	${MAKE} clean -C $$(dirname ${ERROR_HANDLER});
	${MAKE} clean -C $$(dirname ${INSTRUCTIONS});
	${MAKE} clean -C $$(dirname ${LIST});

fclean : clean
	${RM} ${ERROR_HANDLER} ${INSTRUCTIONS} ${LIST} ${NAME}

re : fclean all

.PHONY : all clean fclean re
