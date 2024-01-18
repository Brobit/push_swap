/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:01 by almarico          #+#    #+#             */
/*   Updated: 2024/01/18 11:31:28 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_push_b(t_get *get)
{
	t_list	*tmp;

	tmp->content = get->stack_b->content;
	tmp->next = NULL;
	ft_lstadd_front(&get->stack_a, tmp);
	get->stack_b = get->stack_b->next;
}