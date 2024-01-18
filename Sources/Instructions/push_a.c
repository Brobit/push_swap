/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:12:17 by almarico          #+#    #+#             */
/*   Updated: 2024/01/18 11:31:04 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_push_a(t_get *get)
{
	t_list	*tmp;

	tmp->content = get->stack_a->content;
	tmp->next = NULL;
	ft_lstadd_front(&get->stack_b, tmp);
	get->stack_a = get->stack_a->next;
}
