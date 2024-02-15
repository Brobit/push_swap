/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:12:17 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:59:45 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_push_a(t_get *get)
{
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_b) > 0)
	{
		tmp = get->stack_b;
		ft_lstadd_front_int(&get->stack_a, tmp);
		get->stack_b = get->stack_b->next;
	}
}
