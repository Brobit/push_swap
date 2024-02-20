/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_is_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:59:32 by almarico          #+#    #+#             */
/*   Updated: 2024/02/19 16:59:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_check_list_is_sorted(t_get *get)
{
	if (ft_lstsize_int(get->stack_b) > 0)
		return (FUNCTION_FAIL);
	while ((get->stack_a->next != NULL)
		&& (get->stack_a->content <= get->stack_a->next->content))
		get->stack_a = get->stack_a->next;
	if (get->stack_a->next != NULL)
		return (FUNCTION_FAIL);
	return (FUNCTION_SUCCESS);
}
