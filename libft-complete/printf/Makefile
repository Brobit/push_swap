NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror -g
SRC = ft_conflit_checker.c \
	  ft_init.c \
	  ft_flag_writer.c \
	  ft_param_checker.c \
	  ft_param_writer.c \
	  ft_printf.c \
	  ft_putnbr_base.c \
	  ft_putnbr_base_hex.c \
	  ft_set_specifier_1.c \
	  ft_set_specifier_2.c \
	  ft_write_char.c \
	  ft_write_hex.c \
	  ft_write_integer.c \
	  ft_write_pointer.c \
	  ft_write_str.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
