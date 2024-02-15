/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:22 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:01:53 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_swap_a(t_get *get)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_a) > 1)
	{
		first = get->stack_a;
		second = first->next;
		tmp = first->next->next;
		second->next = first;
		first->next = tmp;
		get->stack_a = second;
	}
}
