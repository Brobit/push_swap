/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:20:51 by almarico          #+#    #+#             */
/*   Updated: 2024/01/12 15:57:12 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

static int	ft_is_in_table(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (str[i])
	{
		j = 0;
		count = 0;
		while (TABLE[j])
		{
			if (str[i] == TABLE[j])
				count++;
			j++;
		}
		if (count == 0)
			return (ft_write_err(ERR_MSG_BAD_CHAR));
		i++;
	}
	return (FUNCTION_SUCCESS);
}

int	ft_check_tab(t_param *tab)
{
	size_t	index;

	index = 0;
	while (tab->param[index])
	{
		if (!ft_is_in_table(tab->param[index]))
			return (FUNCTION_FAIL);
		index++;
	}

	return (FUNCTION_SUCCESS);
}
