/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:39:08 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:45:07 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_lstadd_back_int(t_lst **lst, t_lst *neww)
{
	t_lst	*last;

	last = ft_lstlast_int(*lst);
	if (last)
		last->next = neww;
	else
		*lst = neww;
}
