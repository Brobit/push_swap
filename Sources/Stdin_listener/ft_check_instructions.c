/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:40 by almarico          #+#    #+#             */
/*   Updated: 2024/02/13 11:44:54 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

int	ft_check_instructions(char *tab, t_get *get)
{
	if (ft_strcmp(tab, SA) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, SB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, SAB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, PA) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, PB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RA) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RAB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RRA) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RRB) == 0)
		ft_swap_a(get);
	else if (ft_strcmp(tab, RRAB) == 0)
		ft_swap_a(get);
	else
		return (FUNCTION_FAIL);
	return (FUNCTION_SUCCESS);
}
