/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_dclist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:33 by almarico          #+#    #+#             */
/*   Updated: 2024/01/15 09:49:53 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_convert_to_dclist(t_param *tab, t_get *get)
{
	int	i;

	i = 0;
	if (!get)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dll_a = malloc(sizeof(t_dll));
	if (!get->dll_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dlls_a = malloc(sizeof(t_dlls));
	if (!get->dlls_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	get->dlls_a->first = get->dll_a;
	while (i < tab->size)
	{
		ft_dllstadd_back(&get->dll_a, ft_dllstnew((void *)tab->array[i]));
		get->dlls_a->last = ft_dllstlast(get->dll_a);
		i++;
	}
	return (FUNCTION_SUCCESS);
}
