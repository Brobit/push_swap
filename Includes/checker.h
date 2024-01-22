/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:02 by almarico          #+#    #+#             */
/*   Updated: 2024/01/22 13:53:07 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft-complete/libft/libft.h"
# include "../libft-complete/get_next_line/gnl.h"
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define EXIT_SUCCESS				0
# define EXIT_FAIL					1
# define FUNCTION_SUCCESS			1
# define FUNCTION_FAIL				0
# define INT_MAX					2147483647
# define INT_MIN					-2147483648
# define TABLE						"+-0123456789"
# define ERR_MSG_NEA				"Please enter some value to sort them,\
at least two !!!\n"
# define ERR_MSG_GENERIC			"It's an error !!!\n"
# define ERR_MSG_BAD_CHAR			"Invalid argument : There is a character that \
is neither a sign (+-) or a digit (0123456789) !!!\n"
# define ERR_MSG_UNDERFLOW			"Oupsi, this error is due to an int \
underflow !!!\n"
# define ERR_MSG_OVERFLOW			"Oupsi, this error is due to an int \
overflow !!!\n"
# define ERR_MSG_MALLOC				"The malloc action doesn't succed !!!\n"
# define ERR_MSG_DUPLICATION		"There is duplication !!!\n"
# define ERR_MSG_MULTIPLE_SIGN		"There is more than two '+' or '-' sign\n"
# define OK_MSG						"Damn you're a big boy there is\
no error !!!\n"
# define STDIN						0
# define STDOUT						1
# define STDERR						2
# define EOT						'\x04'

/* Stucture for the error handler */
typedef struct s_param
{
	char	**param;
	t_ll	*array;
	int		size;
}				t_param;

/* Stack access */
typedef struct s_get
{
	t_list		*stack_a;
	t_list		*stack_b;
}				t_get;

typedef struct s_stdin
{
	char	*tab;
	char	**instruction;
}				t_stdin;

/* Error handler */
int				ft_convert_argv_to_str(char **argv, t_param *tab);
int				ft_convert_to_int(t_param *tab);
int				ft_write_err(char *err_msg);
int				ft_error_handler(int argc, char **argv, t_param *tab);
int				ft_check_tab(t_param *tab);
int				ft_check_duplication(t_param *tab);

/* Convertsion to list */
int				ft_convert_to_list(t_param *tab, t_get *get);

/* Instruction set */
void			ft_push_a(t_get *get);
void			ft_push_b(t_get *get);
void			ft_rotate_a(t_get *get);
void			ft_rotate_b(t_get *get);
void			ft_rotate_a_b(t_get *get);
void			ft_swap_a(t_get *get);
void			ft_swap_b(t_get *get);
void			ft_swap_a_b(t_get *get);
void			ft_reverse_rotate_a(t_get *get);
void			ft_reverse_rotate_b(t_get *get);
void			ft_reverse_rotate_a_b(t_get *get);

/* Listening to stdin */
void			ft_stdin_listener(t_stdin *the);

#endif // !FT_PUSH_SWAP_H
