/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:35:47 by almarico          #+#    #+#             */
/*   Updated: 2024/01/09 17:36:47 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dclstclear(t_double_list **lst, void (*del)(void *))
{
	t_double_list	*nav;

	while (*lst)
	{
		nav = (*lst)->next;
		ft_dclstdelone(*lst, del);
		*lst = nav;
	}
	free(*lst);
	*lst = NULL;
}
