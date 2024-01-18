/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:15:22 by almarico          #+#    #+#             */
/*   Updated: 2024/01/18 12:27:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_swap_a(t_get *get)
{
	t_list	*first;
	t_list	*second;
	t_list	*tmp;

	first = get->stack_a;
	tmp = first->next->next;
	second->next = first;
	first->next = tmp;
	get->stack_a = second;
}
