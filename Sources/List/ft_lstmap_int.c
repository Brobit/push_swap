/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <almarico@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:46:15 by almarico          #+#    #+#             */
/*   Updated: 2024/02/15 21:51:47 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_push_swap.h"

t_lst	*ft_lstmap_int(t_lst *lst, int (*f)(int), void (*del)(int))
{
	t_lst	*content;
	t_lst	*begin;

	if (!lst)
		return (NULL);
	content = NULL;
	begin = ft_lstnew_int(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		content = ft_lstnew_int(f(lst->content));
		if (!content)
		{
			ft_lstclear_int(&begin, del);
			return (NULL);
		}
		ft_lstadd_back_int(&begin, content);
		lst = lst->next;
	}
	return (begin);
}
