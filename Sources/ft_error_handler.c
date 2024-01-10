/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:51:29 by almarico          #+#    #+#             */
/*   Updated: 2024/01/10 13:40:45 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"

int	ft_write_err(void)
{
	write(0, &ERR_MSG_0, ft_strlen(ERR_MSG_0));
	return (FUNCTION_FAIL);
}

t_param	**ft_write_err_char(void)
{
	write(0, &ERR_MSG_MALLOC, ft_strlen(ERR_MSG_MALLOC));
	return (FUNCTION_NULL);
}

int	ft_error_handler(int argc, char **argv)
{
	if (argc == 0 || argc == 1)
		return (ft_write_err());
	ft_convert_argv_to_str(argv);

	return (FUNCTION_SUCCESS);
}
