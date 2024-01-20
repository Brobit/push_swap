NAME = sources.a
ERROR_HANDLER = ./Error_handler/error_handler.a
INSTRUCTIONS = ./Instructions/instructions.a
LIST = ./List/list.a
MAIN = ./Main/main.a

all : ${NAME}

${NAME} : ${ERROR_HANDLER} ${INSTRUCTIONS} ${LIST} ${MAIN}
	echo "CREATE ${NAME}\nADDLIB ${ERROR_HANDLER}\nADDLIB ${INSTRUCTIONS}\nADDLIB ${LIST}\nADDLIB ${MAIN}\nSAVE\nEND" | ar -M

${ERROR_HANDLER} :
	${MAKE} -C $$(dirname $@)

${INSTRUCTIONS} :
	${MAKE} -C $$(dirname $@)

${LIST} :
	${MAKE} -C $$(dirname $@)

${MAIN} :
	${MAKE} -C $$(dirname $@)

clean :
	${MAKE} clean -C $$(dirname ${ERROR_HANDLER});
	${MAKE} clean -C $$(dirname ${INSTRUCTIONS});
	${MAKE} clean -C $$(dirname ${LIST});
	${MAKE} clean -C $$(dirname ${MAIN});

fclean : clean
	${RM} ${ERROR_HANDLER} ${INSTRUCTIONS} ${LIST} ${MAIN} ${NAME}

re : fclean all

.PHONY : all clean fclean re
