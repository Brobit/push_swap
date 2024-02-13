/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_is_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:59:32 by almarico          #+#    #+#             */
/*   Updated: 2024/02/13 12:09:28 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/checker.h"

int	ft_check_list_is_sorted(t_get *get)
{
	while (get->stack_a->next != NULL
		&& get->stack_a->content <= get->stack_a->next->content)
		get->stack_a = get->stack_a->next;
	if (get->stack_a->content > get->stack_a->next->content)
		return (ft_write_err(ERR_LIST_NOT_SORTED));
	return (FUNCTION_SUCCESS);
}
