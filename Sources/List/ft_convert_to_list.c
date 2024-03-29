/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:33 by almarico          #+#    #+#             */
/*   Updated: 2024/03/04 09:38:48 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_convert_to_list(t_param *tab, t_get *get)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		ft_lstadd_back_int(&get->stack_a, ft_lstnew_int(tab->array[i]));
		i++;
	}
	return (FUNCTION_SUCCESS);
}
