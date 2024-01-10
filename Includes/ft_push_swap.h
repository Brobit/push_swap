/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:02 by almarico          #+#    #+#             */
/*   Updated: 2024/01/10 14:08:11 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

# include "../libft-complete/libft/libft.h"
# include "../libft-complete/printf/ft_printf.h"
# include "../libft-complete/get_next_line/gnl.h"
# include "../libft-complete/get_next_line/gnlb.h"
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>


# define EXIT_SUCCESS		0
# define EXIT_FAIL			1
# define FUNCTION_SUCCESS	1
# define FUNCTION_FAIL		0
# define FUNCTION_NULL		NULL
# define ERR_MSG_0			"Please enter some value to sort them, at least two !!!"
# define ERR_MSG_MALLOC		"The malloc action doesn't succed !!!"

typedef struct s_param {
	char	*param;
}				t_param;

t_param			**ft_convert_argv_to_str(char **argv);
t_param			**ft_write_err_char(void);
int				ft_write_err(void);
int				ft_error_handler(int argc, char **argv);

#endif // !FT_PUSH_SWAP_H
