/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:31 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:01:40 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_rotate_b(t_get *get)
{
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_b) > 1)
	{
		tmp = get->stack_b;
		ft_lstadd_back_int(&get->stack_b, tmp);
		get->stack_b = get->stack_b->next;
	}
}
