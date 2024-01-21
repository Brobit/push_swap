/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:51:29 by almarico          #+#    #+#             */
/*   Updated: 2024/01/21 11:34:51 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_write_err(char *err_msg)
{
	write(STDERR, err_msg, ft_strlen(err_msg));
	return (FUNCTION_FAIL);
}

int	ft_write_no_err(char *nice_msg)
{
	write(STDERR, nice_msg, ft_strlen(nice_msg));
	return (FUNCTION_SUCCESS);
}

int	ft_error_handler(int argc, char **argv, t_param *tab)
{
	if (argc == 0)
		return (ft_write_err(ERR_MSG_NEA));
	ft_convert_argv_to_str(argv, tab);
	if (!ft_check_tab(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	if (!ft_convert_to_int(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	if (!ft_check_duplication(tab))
		return (ft_write_err(ERR_MSG_GENERIC));
	return (ft_write_no_err(OK_MSG));
}
