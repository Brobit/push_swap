/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:02 by almarico          #+#    #+#             */
/*   Updated: 2024/03/02 10:17:19 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft-complete/libft/libft.h"
# include "../libft-complete/printf/ft_printf.h"
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
# define ERR_MSG_NEA				"Please enter some value to sort them, \
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
# define OK_MSG						"Damn you're a big boy there is \
no error !!!\n"
# define STDIN						0
# define STDOUT						1
# define STDERR						2
# define PA							"pa\n"
# define PB							"pb\n"
# define SA							"sa\n"
# define SB							"sb\n"
# define SAB						"ss\n"
# define RA							"ra\n"
# define RB							"rb\n"
# define RAB						"rr\n"
# define RRA						"rra\n"
# define RRB						"rrb\n"
# define RRAB						"rrr\n"

/* Stucture for the error handler */
typedef struct s_param
{
	char	**param;
	t_ll	*array;
	int		size;
}				t_param;

/* Structure for list */
typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}				t_lst;

/* Stack access */
typedef struct s_get
{
	t_lst		*stack_a;
	t_lst		*stack_b;
}				t_get;

/* Structure for the algorithm */
typedef struct s_sort_a
{
	int			biggest_num;
	int			bnp;
	int			mediane;
}				t_sort_a;

typedef struct s_target
{
	int			number;
	int			position;
	int			tar_num;
	int			tar_pos;
	int			mvt_cost;
	int			mediane_sa;
	int			mediane_sb;
}				t_target;

typedef struct s_algo
{
	t_sort_a	sort_a;
	t_target	cost;
}				t_algo;

/* Error handler */
int				ft_convert_argv_to_str(char **argv, t_param *tab);
int				ft_convert_to_int(t_param *tab);
int				ft_write_err(char *err_msg);
int				ft_write_no_err(char *nice_msg);
int				ft_error_handler(int argc, char **argv, t_param *tab);
int				ft_check_tab(t_param *tab);
int				ft_check_duplication(t_param *tab);

/* Convertsion to list & check if list is sort*/
int				ft_convert_to_list(t_param *tab, t_get *get);
int				ft_check_list_is_sorted(t_get *get);

/* List function */

void			ft_lstadd_back_int(t_lst **lst, t_lst *neww);
void			ft_lstadd_front_int(t_lst **lst, t_lst *neww);
void			ft_lstclear_int(t_lst **lst, void (*del)(int));
void			ft_lstdelone_int(t_lst *lst, void (*del)(int));
void			ft_lstiter_int(t_lst *lst, void (*f)(int));
t_lst			*ft_lstlast_int(t_lst *lst);
t_lst			*ft_lstmap_int(t_lst *lst, int (*f)(int), void (*del)(int));
t_lst			*ft_lstnew_int(int content);
int				ft_lstsize_int(t_lst *lst);

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
int				ft_check_instructions(char *tab, t_get *get);

/* algorithm function */
void			ft_exec(char *instruction, t_get *get);
void			ft_algorithm(t_get *get, t_algo *algo);
void			ft_sort_under_three(t_get *get, t_algo *algo);
void			ft_sort_stack(t_get *get, t_algo *algo);
void			ft_find_biggest_number(t_lst *stack, t_algo *algo);
void			ft_find_mediane(t_lst *stack, int *mediane);
void			ft_cost_calculation(t_get *get, t_algo *algo, t_lst *nav);
void			ft_cost_updater(t_lst *stack, t_algo *algo, int number);
void			ft_exec_first_step(t_get *get, t_algo *algo);
void			ft_exec_second_step(t_get *get, t_algo *algo);
void			ft_move(t_get *get, char *move, int *nb, int sign);
void			ft_move_to_pos(t_get *get, t_algo *algo);
void			ft_move_simple(t_get *get, t_algo *algo,
					int size_a, int size_b);
void			ft_move_double(t_get *get, t_algo *algo,
					int size_a, int size_b);
int				ft_find_pos(t_lst *stack, int number);
int				ft_find_target(t_lst *stack, int number);
int				ft_find_sup(t_lst *stack, int nb_search);

/* Init function */
void			ft_init_tab(t_param *tab);
void			ft_init_get(t_get *get);
void			ft_init_t_sort(t_sort_a *sort_a);
void			ft_init_t_target(t_target *cost);

#endif // !FT_PUSH_SWAP_H
