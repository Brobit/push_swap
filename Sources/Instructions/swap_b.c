/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:37 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:02:11 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_swap_b(t_get *get)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_b) > 1)
	{
		first = get->stack_b;
		second = first->next;
		tmp = first->next->next;
		second->next = first;
		first->next = tmp;
		get->stack_b = second;
	}
}
