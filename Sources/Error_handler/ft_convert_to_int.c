/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:07:33 by almarico          #+#    #+#             */
/*   Updated: 2024/01/21 13:26:13 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

static int	ft_check_int_max_min(t_ll nb)
{
	if (nb < INT_MIN)
		return (ft_write_err(ERR_MSG_UNDERFLOW));
	if (nb > INT_MAX)
		return (ft_write_err(ERR_MSG_OVERFLOW));
	return (FUNCTION_SUCCESS);
}

int	ft_convert_to_int(t_param *tab)
{
	int	i;

	tab->array = malloc(tab->size * sizeof(t_ll));
	if (!tab->array)
		return (ft_write_err(ERR_MSG_MALLOC));
	i = 0;
	while (tab->param[i] && i < tab->size)
	{
		tab->array[i] = ft_atoll(tab->param[i]);
		if (!ft_check_int_max_min(tab->array[i]))
			return (FUNCTION_FAIL);
		i++;
	}
	return (FUNCTION_SUCCESS);
}
