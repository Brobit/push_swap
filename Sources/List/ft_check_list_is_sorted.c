/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_is_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:59:32 by almarico          #+#    #+#             */
/*   Updated: 2024/03/05 13:48:17 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_check_list_is_sorted(t_get *get)
{
	t_lst	*nav;

	nav = get->stack_a;
	if (ft_lstsize_int(get->stack_b) > 0)
		return (FUNCTION_FAIL);
	while ((nav->next != NULL) && (nav->content <= nav->next->content))
		nav = nav->next;
	if (nav->next != NULL)
		return (FUNCTION_FAIL);
	return (FUNCTION_SUCCESS);
}
