/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:43:08 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:45:24 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

void	ft_lstclear_int(t_lst **lst, void (*del)(int))
{
	t_lst	*nav;

	while (*lst)
	{
		nav = (*lst)->next;
		ft_lstdelone_int(*lst, del);
		*lst = nav;
	}
	free(*lst);
	*lst = NULL;
}
