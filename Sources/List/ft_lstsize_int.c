/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:48:18 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:44:44 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

int	ft_lstsize_int(t_lst *lst)
{
	t_lst	*nav;
	int		count;

	nav = lst;
	count = 0;
	while (nav)
	{
		count++;
		nav = nav->next;
	}
	return (count);
}
