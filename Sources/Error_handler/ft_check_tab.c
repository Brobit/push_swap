/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:20:51 by almarico          #+#    #+#             */
/*   Updated: 2024/03/05 13:52:08 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

static int	ft_is_in_table(const char *str)
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

static int	ft_multiple_sign(const char *str)
{
	int		i;
	int		count_neg;
	int		count_pos;

	i = 0;
	count_neg = 0;
	count_pos = 0;
	while (str[i])
	{
		if (str[i] == '+')
			count_pos++;
		if (str[i] == '-')
			count_neg++;
		i++;
	}
	if (count_neg > 1 || count_pos > 1)
		return (ft_write_err(ERR_MSG_MULTIPLE_SIGN));
	return (FUNCTION_SUCCESS);
}

int	ft_check_tab(t_param *tab)
{
	size_t	index;

	index = 0;
	while (tab->param[index])
	{
		if (!ft_is_in_table(tab->param[index]))
		{
			ft_free_tab(tab);
			return (FUNCTION_FAIL);
		}
		if (!ft_multiple_sign(tab->param[index]))
		{
			ft_free_tab(tab);
			return (FUNCTION_FAIL);
		}
		index++;
	}
	return (FUNCTION_SUCCESS);
}
