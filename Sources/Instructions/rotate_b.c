/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:31 by almarico          #+#    #+#             */
/*   Updated: 2024/01/16 14:47:12 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_rotate_b(t_get *get)
{
	t_list	tmp;

	tmp.content = get->stack_b->content;
	tmp.next = NULL;
	ft_lstadd_back(&get->stack_b, &tmp);
	get->stack_b = get->stack_b->next;
}
