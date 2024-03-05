/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplication.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:02:11 by almarico          #+#    #+#             */
/*   Updated: 2024/03/05 14:09:23 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_check_duplication(t_param *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < tab->size - 1)
	{
		j = i + 1;
		while (j < tab->size)
		{
			if (tab->array[i] == tab->array[j])
			{
				ft_free_tab(tab);
				return (ft_write_err(ERR_MSG_DUPLICATION));
			}
			j++;
		}
		i++;
	}
	return (FUNCTION_SUCCESS);
}
