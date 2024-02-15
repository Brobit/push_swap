/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:01 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:00:07 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_push_b(t_get *get)
{
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_a) > 0)
	{
		tmp = get->stack_a;
		ft_lstadd_front_int(&get->stack_b, tmp);
		get->stack_a = get->stack_a->next;
	}
}
