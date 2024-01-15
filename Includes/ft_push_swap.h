/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:02 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 09:59:01 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft-complete/libft/libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define EXIT_SUCCESS				0
# define EXIT_FAIL					1
# define FUNCTION_SUCCESS			1
# define FUNCTION_FAIL				0
# define FUNCTION_NULL				NULL
# define INT_MAX					2147483647
# define INT_MIN					-2147483648
# define TABLE						"+-0123456789"
# define ERR_MSG_NEA				"Please enter some value to sort them, at least two !!!\n"
# define ERR_MSG_GENERIC			"It's an error !!!\n"
# define ERR_MSG_BAD_CHAR			"Invalid argument : There is a character that is neither a sign (+-) or a digit (0123456789) !!!\n"
# define ERR_MSG_UNDERFLOW			"Oupsi, this error is due to an int underflow !!!\n"
# define ERR_MSG_OVERFLOW			"Oupsi, this error is due to an int overflow !!!\n"
# define ERR_MSG_MALLOC				"The malloc action doesn't succed !!!\n"
# define ERR_MSG_DUPLICATION		"There is duplication !!!\n"

typedef struct s_param
{
	char	**param;
	t_ll	*array;
	int		size;
}				t_param;

typedef struct s_get
{
	t_dll		*dll_a;
	t_dll		*dll_b;
	t_dlls		*dlls_a;
	t_dlls		*dlls_b;
}				t_get;

int				ft_convert_argv_to_str(char **argv, t_param *tab);
int				ft_convert_to_int(t_param *tab);
int				ft_write_err(char *err_msg);
int				ft_error_handler(int argc, char **argv, t_param *tab);
int				ft_check_tab(t_param *tab);
int				ft_check_duplication(t_param *tab);
int				ft_convert_to_dclist(t_param *tab, t_get *get);

void			ft_pa(t_get *get);
void			ft_pb(t_get *get);
void			ft_ra(t_get *get);
void			ft_rb(t_get *get);
void			ft_rr(t_get *get);
void			ft_rra(t_get *get);
void			ft_rrb(t_get *get);
void			ft_rrr(t_get *get);
void			ft_sa(t_get *get);
void			ft_sb(t_get *get);
void			ft_ss(t_get *get);

#endif // !FT_PUSH_SWAP_H
