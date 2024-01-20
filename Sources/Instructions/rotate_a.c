/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:11 by almarico          #+#    #+#             */
/*   Updated: 2024/01/20 12:22:58 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_rotate_a(t_get *get)
{
	t_list	*tmp;

	tmp = get->stack_a;
	tmp->content = get->stack_a->content;
	tmp->next = NULL;
	ft_lstadd_back(&get->stack_a, tmp);
	get->stack_a = get->stack_a->next;
}
