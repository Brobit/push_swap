/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:40 by almarico          #+#    #+#             */
/*   Updated: 2024/02/14 12:52:55 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

int	ft_check_instructions(char *tab, t_get *get)
{
/* 	ft_debug(get); */
	if (ft_strcmp(tab, SA) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, SB) == 0)
		ft_swap_b(get);
	else if (ft_strcmp(tab, SAB) == 0)
		ft_swap_a_b(get);
	else if (ft_strcmp(tab, PA) == 0)
		ft_push_a(get);
	else if (ft_strcmp(tab, PB) == 0)
		ft_push_b(get);
	else if (ft_strcmp(tab, RA) == 0)
		ft_rotate_a(get);
	else if (ft_strcmp(tab, RB) == 0)
		ft_rotate_b(get);
	else if (ft_strcmp(tab, RAB) == 0)
		ft_rotate_a_b(get);
	else if (ft_strcmp(tab, RRA) == 0)
		ft_reverse_rotate_a(get);
	else if (ft_strcmp(tab, RRB) == 0)
		ft_reverse_rotate_b(get);
	else if (ft_strcmp(tab, RRAB) == 0)
		ft_reverse_rotate_a_b(get);
	else
		return (FUNCTION_FAIL);
/* 	ft_debug(get); */
	return (FUNCTION_SUCCESS);
}
