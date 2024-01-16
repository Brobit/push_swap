/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:33 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 16:35:30 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_convert_to_list(t_param *tab, t_get *get)
{
	int	i;

	i = 0;
	if (!get)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->stack_a = malloc(sizeof(t_list));
	if (!get->stack_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	while (i < tab->size)
	{
		ft_lstadd_back(&get->stack_a, ft_lstnew((void *)tab->array[i]));
		i++;
	}
	return (FUNCTION_SUCCESS);
}
