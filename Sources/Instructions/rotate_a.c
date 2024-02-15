/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:14:11 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 22:01:17 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_rotate_a(t_get *get)
{
	t_lst	*tmp;

	if (ft_lstsize_int(get->stack_a) > 1)
	{
		tmp = get->stack_a;
		ft_lstadd_back_int(&get->stack_a, tmp);
		get->stack_a = get->stack_a->next;
	}
}
