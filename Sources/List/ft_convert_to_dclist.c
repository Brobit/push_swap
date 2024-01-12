/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_dclist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:33 by almarico          #+#    #+#             */
/*   Updated: 2024/01/12 17:27:49 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"
#include <stdlib.h>

int	ft_convert_to_dclist(t_param *tab, t_double_list **dclist_a, t_double_list_save *dclist_a_save)
{
	t_double_list *tmp;
	int	i;

	i = 0;
	*dclist_a = malloc(sizeof(t_double_list));
	if (!*dclist_a)
		return (ft_write_err(ERR_MSG_MALLOC));
	dclist_a_save = malloc(sizeof(t_double_list_save));
	if (!dclist_a_save)
		return (ft_write_err(ERR_MSG_MALLOC));
	tmp = malloc(sizeof(t_double_list));
	if (!tmp)
		return (ft_write_err(ERR_MSG_MALLOC));
	dclist_a_save->first = *dclist_a;
	while (i < tab->size)
	{
		tmp = ft_dclstnew((void *)tab->array[i]);
		ft_dclstadd_back(dclist_a, tmp);
		dclist_a_save->last = ft_dclstlast(*dclist_a);
		i++;
	}
	return (FUNCTION_SUCCESS);
}
