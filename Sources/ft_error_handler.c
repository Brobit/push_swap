/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:51:29 by almarico          #+#    #+#             */
/*   Updated: 2024/01/10 12:53:15 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_push_swap.h"

int	ft_write_err(void)
{
	write(0, &ERR_MSG_0, ft_strlen(ERR_MSG_0));
	return (EXIT_FAIL);
}
