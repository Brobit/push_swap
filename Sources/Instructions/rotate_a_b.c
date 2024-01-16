/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:40 by almarico          #+#    #+#             */
/*   Updated: 2024/01/16 14:47:00 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_rotate_a_b(t_get *get)
{
	t_list	tmp;

	tmp.next = NULL;
	tmp.content = get->stack_a->content;
	ft_lstadd_back(&get->stack_a, &tmp);
	get->stack_a = get->stack_a->next;
	tmp.content = get->stack_b->content;
	ft_lstadd_back(&get->stack_b, &tmp);
	get->stack_b = get->stack_b->next;
}
