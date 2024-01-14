/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_dclist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:33 by almarico          #+#    #+#             */
/*   Updated: 2024/01/14 13:44:31 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"
#include <stdlib.h>

int	ft_convert_to_dclist(t_param *tab, t_get *get)
{
	int	i;

	i = 0;
	get = malloc(sizeof(t_get));
	if (!get)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dll_a = malloc(sizeof(t_double_list));
	if (!get->dll_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dlls_a = malloc(sizeof(t_double_list_save));
	if (!get->dlls_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dlls_a->first = get->dll_a;
	while (i < tab->size)
	{
		ft_dclstadd_back(&get->dll_a, ft_dclstnew((void *)tab->array[i]));
		get->dlls_a->last = ft_dclstlast(get->dll_a);
		i++;
	}
	return (FUNCTION_SUCCESS);
}
