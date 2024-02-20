/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:30:02 by almarico          #+#    #+#             */
/*   Updated: 2024/02/19 13:41:07 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft-complete/get_next_line/gnl.h"
# include "../Includes/ft_push_swap.h"
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

# define ERR_MSG_INSTRUCTION		"Sorry but you put a string that is not an \
instruction :/ !!!\n"
# define ERR_LIST_NOT_SORTED		"Sorry but the list was not sorted\n"

typedef struct s_stdin
{
	char		*tab;
}				t_stdin;

/* debugging function */
void			ft_debug(t_get *get);

/* Listening to stdin */
int				ft_stdin_listener(t_stdin *the, t_get *get);

#endif // !FT_PUSH_SWAP_H
