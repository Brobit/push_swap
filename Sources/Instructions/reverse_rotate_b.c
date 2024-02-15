/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:01 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:00:51 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_reverse_rotate_b(t_get *get)
{
	t_lst	*tmp;
	t_lst	*second_last;

	if (get->stack_a == NULL || get->stack_a->next == NULL)
		return ;
	tmp = get->stack_b;
	second_last = NULL;
	while (tmp->next != NULL)
	{
		second_last = tmp;
		tmp = tmp->next;
	}
	second_last->next = NULL;
	ft_lstadd_front_int(&get->stack_b, tmp);
}
