/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_listener.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:29:13 by almarico          #+#    #+#             */
/*   Updated: 2024/02/14 10:47:21 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

int	ft_stdin_listener(t_stdin *the, t_get *get)
{
	the->tab = NULL;
	the->tab = get_next_line(STDIN);
	while (the->tab != NULL)
	{
		if (!ft_check_instructions(the->tab, get))
			return (ft_write_err(ERR_MSG_INSTRUCTION));
/* 		write(STDOUT, the->tab, ft_strlen(the->tab)); */
		the->tab = get_next_line(STDIN);
	}
	return (FUNCTION_SUCCESS);
}
