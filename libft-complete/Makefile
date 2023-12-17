NAME = libft_complete.a
LIB_GNL = get_next_line/gnl.a
LIB = printf/libftprintf.a
PATH = ./
OBJ = gnl.a\
	  libftprintf.a

all : ${NAME}

${NAME} : ${LIB_GNL} ${LIB} ${OBJ}
	cp ${LIB_GNL} ${LIB} ${PATH}
	ar crs ${NAME} ${OBJ}

${LIB_GNL} :
	$(MAKE) -C $$(dirname $@)

${LIB} :
	$(MAKE) -C $$(dirname $@)

${OBJ} :
	ar x ${OBJ}

clean :
	$(MAKE) clean -C $$(dirname $(LIB));
	$(MAKE) clean -C $$(dirname $(LIB_GNL));
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)
	rm -f $(LIB_GNL)
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
